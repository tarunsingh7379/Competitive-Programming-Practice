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

    set<ll> st;
    for (ll k = 2; k <= 1000; k++)
    {
        ll sum = 1 + k + k * k;
        ll prod = k * k;
        st.insert(sum);
        for (ll i = 3; i < 20; i++)
        {
            prod *= k;
            if (prod > 1e6)
            {
                break;
            }
            sum += prod;
            st.insert(sum);
        }
    }

    while (t)
    {
        ll n;
        cin >> n;
        if (st.count(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}