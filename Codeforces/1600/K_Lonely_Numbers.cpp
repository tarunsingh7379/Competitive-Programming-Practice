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
    vector<int> prime_cnt(1000001, 0);
    for (int i = 2; i <= 1000000; i++)
    {
        prime_cnt[i] = prime_cnt[i - 1] + sieve[i];
    }
    while (t)
    {
        int n;
        cin >> n;
        ll ans = prime_cnt[n] - prime_cnt[sqrt(n)] + 1;
        cout << ans << endl;
        t--;
    }

    return 0;
}