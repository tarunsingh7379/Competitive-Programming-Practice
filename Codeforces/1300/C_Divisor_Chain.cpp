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
        ll n;
        cin >> n;
        vector<ll> ans;
        ans.push_back(n);
        for (ll i = 0; i <= 30; i++)
        {
            if ((n & (1LL << i)) > 0)
            {
                n ^= (1LL << i);
                if (n == 0)
                {
                    n = (1LL << i);
                    break;
                }
                ans.push_back(n);
            }
        }
        while (n % 2 == 0)
        {
            n /= 2;
            ans.push_back(n);
        }
        cout << ans.size() << endl;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}