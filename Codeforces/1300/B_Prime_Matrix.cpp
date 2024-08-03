#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void sieve(vector<int> &prime)
{
    int sieve[100005];
    memset(sieve, 1, sizeof(sieve));
    for (int i = 2; i < 100005; i++)
    {
        if (sieve[i])
        {
            for (int j = 2 * i; j < 100005; j += i)
            {
                sieve[j] = 0;
            }
        }
    }
    for (int i = 2; i < 100005; i++)
    {
        if (sieve[i])
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<int> prime;
    sieve(prime);
    int cost_h = INT_MAX, cost_v = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int cost = 0;
        for (int j = 0; j < m; j++)
        {
            int ind = lower_bound(prime.begin(), prime.end(), a[i][j]) - prime.begin();
            cost += (prime[ind] - a[i][j]);
        }
        cost_h = min(cost_h, cost);
    }
    for (int j = 0; j < m; j++)
    {
        int cost = 0;
        for (int i = 0; i < n; i++)
        {
            int ind = lower_bound(prime.begin(), prime.end(), a[i][j]) - prime.begin();
            cost += (prime[ind] - a[i][j]);
        }
        cost_v = min(cost_v, cost);
    }
    cout << min(cost_h, cost_v) << endl;
    return 0;
}