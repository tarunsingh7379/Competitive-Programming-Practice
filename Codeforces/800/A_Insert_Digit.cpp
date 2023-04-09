#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] - '0' >= d)
            {
                ans.push_back(s[i]);
            }
            else
            {
                ans.push_back(d + '0');
                for (int j = i; j < n; j++)
                {
                    ans.push_back(s[j]);
                }
                break;
            }
        }
        if (ans.size() == n)
        {
            ans.push_back(d + '0');
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}