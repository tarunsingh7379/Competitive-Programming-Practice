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
        int cnt = 0;
        for (auto c : s)
        {
            cnt += (c == '1');
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += cnt;
            if (s[i] == '1')
                ans--;
            else
                ans++;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}