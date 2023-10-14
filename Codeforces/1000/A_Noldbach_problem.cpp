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

    int n, k;
    cin >> n >> k;

    createSieve();
    vector<int> pr;
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
        {
            pr.push_back(i);
        }
    }
    int cnt = 0;
    for (int i = 0; i < pr.size() - 1; i++)
    {
        int sum = pr[i] + pr[i + 1] + 1;
        if (sum <= n && sieve[sum])
        {
            cnt++;
        }
    }

    cout << (cnt >= k ? "YES" : "NO") << endl;

    return 0;
}