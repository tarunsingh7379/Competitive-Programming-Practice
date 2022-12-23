#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    if (n == 1 && s == 0)
    {
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    string ans;
    while (s >= 10)
    {
        ans.push_back('9');
        s -= 9;
    }
    ans.push_back(s + '0');
    if (ans.size() > n)
    {
        cout << -1 << " " << -1 << endl;
    }
    else
    {
        sort(ans.begin(), ans.end());
        if (ans.back() == '0')
        {
            cout << -1 << " " << -1 << endl;
        }
        else
        {
            if (ans.size() == n)
            {
                sort(ans.begin(), ans.end());
                cout << ans << " ";
                reverse(ans.begin(), ans.end());
                cout << ans << endl;
            }
            else
            {
                ll extra = n - ans.size();
                ans = "1" + string(extra - 1, '0') + to_string(ans[0] - '0' - 1) + ans.substr(1);
                cout << ans << " ";
                sort(ans.begin(), ans.end());
                reverse(ans.begin(), ans.end());
                ll sum = 0;
                string ans1;
                for (auto c : ans)
                {
                    sum += (c - '0');
                    if (sum > 9)
                    {
                        sum -= (c - '0');
                        ans1.push_back(sum + '0');
                        sum = c - '0';
                    }
                }
                ans1.push_back(sum + '0');
                cout << ans1 << string(n - ans1.size(), '0') << endl;
            }
        }
    }
    return 0;
}