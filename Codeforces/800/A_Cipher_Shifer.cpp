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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        ans.push_back(s[0]);
        for (int i = 1; i < n; i++)
        {
            if (s[i] != ans.back())
            {
                continue;
            }
            if (i + 1 < n)
            {
                ans.push_back(s[i + 1]);
                i++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}