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
        string s;
        cin >> s;
        int n = s.size();
        vector<int> used(n, 0);
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            int x = 0;
            if (s[i] == s[i - 1] && used[i - 1] == 0)
            {
                x = 1;
            }
            if (i - 2 >= 0 && s[i] == s[i - 2] && used[i - 2] == 0)
            {
                x = 1;
            }
            used[i] = x;
            ans += x;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}