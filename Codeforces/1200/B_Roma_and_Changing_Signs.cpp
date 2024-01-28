#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> neg, pos;
    ll zero = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x < 0)
        {
            neg.push_back(x);
        }
        else if (x > 0)
        {
            pos.push_back(x);
        }
        else
        {
            zero++;
        }
    }
    ll ans = 0;
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());
    for (auto num : pos)
    {
        ans += num;
    }

    if (k <= neg.size())
    {
        for (ll i = 1; i <= k; i++)
        {
            ans = ans - neg[i - 1];
        }
        for (ll i = k; i < neg.size(); i++)
        {
            ans = ans + neg[i];
        }
    }
    else
    {
        for (auto num : neg)
        {
            ans = ans - num;
        }
        ll d = k - neg.size();
        if (d % 2 != 0)
        {
            if (zero)
            {
            }
            else
            {
                if (neg.size() > 0 && pos.size() > 0)
                {
                    if (abs(neg.back()) <= pos.front())
                    {
                        ans = ans + 2 * neg.back();
                    }
                    else
                    {
                        ans = ans - 2 * pos.front();
                    }
                }
                else if (neg.size() > 0)
                {
                    ans = ans + 2 * neg.back();
                }
                else
                {
                    ans = ans - 2 * pos.front();
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}