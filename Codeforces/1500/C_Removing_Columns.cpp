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
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int ans = 0;
    vector<int> good_rows(n, 0);
    for (int j = 0; j < m; j++)
    {
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            if (!good_rows[i])
            {
                if (v[i][j] < v[i - 1][j])
                {
                    ok = false;
                    break;
                }
            }
        }
        if (!ok)
        {
            ans++;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (!good_rows[i])
                {
                    if (v[i][j] > v[i - 1][j])
                    {
                        good_rows[i] = 1;
                    }
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}