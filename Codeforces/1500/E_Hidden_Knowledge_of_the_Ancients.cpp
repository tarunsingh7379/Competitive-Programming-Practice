#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, l, r;
        cin >> n >> k >> l >> r;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i)
            cin >> a[i];

        map<ll, ll> mp1, mp2;

        ll ans = 0;
        int x = 0, y = 0;
        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++)
        {
            while (x < n)
            {
                auto it = mp1.find(a[x]);
                if (it != mp1.end())
                {
                    it->second++;
                    x++;
                }
                else
                {
                    if (cnt1 + 1 <= k)
                    {
                        mp1[a[x]] = 1;
                        cnt1++;
                        x++;
                    }
                    else
                        break;
                }
            }

            while (y < n)
            {
                auto it = mp2.find(a[y]);
                if (it != mp2.end())
                {
                    it->second++;
                    y++;
                }
                else
                {
                    if (cnt2 + 1 <= (k - 1))
                    {
                        mp2[a[y]] = 1;
                        cnt2++;
                        y++;
                    }
                    else
                        break;
                }
            }

            ll L = i + l - 1;
            ll R = i + r - 1;
            ll low = y;
            ll high = x - 1;
            ll left = max(L, low);
            ll right = min(R, high);
            if (left <= right)
                ans += (right - left + 1);

            auto itp = mp1.find(a[i]);
            if (itp != mp1.end())
            {
                itp->second--;
                if (itp->second == 0)
                {
                    mp1.erase(itp);
                    cnt1--;
                }
            }
            auto itq = mp2.find(a[i]);
            if (itq != mp2.end())
            {
                itq->second--;
                if (itq->second == 0)
                {
                    mp2.erase(itq);
                    cnt2--;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
