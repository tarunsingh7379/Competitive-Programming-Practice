#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> v;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    vector<int> row(n, 0), col(m, 0);
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '*')
            {
                cnt++;
            }
        }
        row[i] = cnt;
    }
    for (int j = 0; j < m; j++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i][j] == '*')
            {
                cnt++;
            }
        }
        col[j] = cnt;
    }
    int tot = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '*')
            {
                tot++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int cur = row[i] + col[j];
            if (v[i][j] == '*')
            {
                cur--;
            }
            if (cur == tot)
            {
                cout << "YES" << endl;
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}