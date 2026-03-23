#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int sieve[1000001];

void createSieve()
{
    int n = 1000000;
    for (int i = 2; i <= n; i++)
    {
        sieve[i] = 1;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    createSieve();
    vector<ll> p;
    for (ll i = 2; i <= 1000000; i++)
    {
        if (sieve[i])
        {
            p.push_back(i);
        }
    }
    while (t)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> st;
        bool ok = false;
        for (ll i = 0; i < n; i++)
        {
            ll temp = a[i];
            for (auto x : p)
            {
                if (1LL * x * x > temp)
                    break;
                if (temp % x == 0)
                {
                    if (st.count(x))
                    {
                        ok = true;
                        break;
                    }
                    st.insert(x);
                }
                while (temp % x == 0)
                {
                    temp /= x;
                }
            }
            if (temp > 1)
            {
                if (st.count(temp))
                {
                    ok = true;
                    break;
                }
                st.insert(temp);
            }
            if (ok)
                break;
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}