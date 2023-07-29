#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int sieve[3001];

void createSieve()
{
    int n = 3000;
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

    int n;
    cin >> n;
    createSieve();
    vector<int> prime;
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
        {
            prime.push_back(i);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (auto num : prime)
        {
            if (i % num == 0)
            {
                cnt++;
            }
        }
        ans += (cnt == 2);
    }
    cout << ans << endl;
    return 0;
}