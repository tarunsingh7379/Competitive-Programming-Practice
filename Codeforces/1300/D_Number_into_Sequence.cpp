#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

vector<ll> createSieve()
{
    int n = 100000;
    int prime[n + 1];
    for (int i = 1; i <= n; i++)
    {
        prime[i] = 1;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    vector<ll> pr;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            pr.push_back(i);
        }
    }
    return pr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<ll> pr = createSieve();
    while (t)
    {
        ll n;
        cin >> n;
        ll len = 1;
        ll num = n, prime = -1;
        for (auto x : pr)
        {
            ll temp = n;
            ll cnt = 0;
            while (temp % x == 0)
            {
                temp /= x;
                cnt++;
            }
            if (cnt > len)
            {
                len = cnt;
                num = 1LL * temp * x;
                prime = x;
            }
        }
        cout << len << endl;
        if (prime != -1)
        {
            for (int i = 0; i < len - 1; i++)
            {
                cout << prime << " ";
            }
        }
        cout << num << endl;
        t--;
    }

    return 0;
}