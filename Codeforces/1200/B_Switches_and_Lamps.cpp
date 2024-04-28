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
    vector<string> a;
    vector<int> freq(m, 0);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
        for (int j = 0; j < s.size(); j++)
        {
            freq[j] += (s[j] - '0');
        }
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        flag = 1;
        for (int j = 0; j < m; j++)
        {
            freq[j] -= (a[i][j] - '0');
        }
        for (int j = 0; j < m; j++)
        {
            if (freq[j] == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            break;
        }
        for (int j = 0; j < m; j++)
        {
            freq[j] += (a[i][j] - '0');
        }
    }
    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}