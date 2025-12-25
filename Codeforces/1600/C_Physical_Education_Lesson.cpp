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
        ll p, val;
        cin >> p >> val;
        vector<ll> a = {p - val, p + val - 2};
        set<ll> st;
        for (auto num : a)
        {
            for (ll i = 1; i * i <= num; i++)
            {
                if (num % i == 0)
                {
                    ll d1 = i;
                    ll d2 = num / i;
                    if (d1 % 2 == 0)
                    {
                        ll k = d1 / 2 + 1;
                        if (k > 1 && val <= k)
                        {
                            st.insert(k);
                        }
                    }
                    if (d2 % 2 == 0)
                    {
                        ll k = d2 / 2 + 1;
                        if (k > 1 && val <= k)
                        {
                            st.insert(k);
                        }
                    }
                }
            }
        }
        cout << st.size() << endl;
        t--;
    }

    return 0;
}