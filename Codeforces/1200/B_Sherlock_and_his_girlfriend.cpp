#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int sieve[1000001];

void createSieve(int n)
{
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
    int ans = 0;
    createSieve(n + 1);
    if (n > 2)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    for (int i = 2; i <= n + 1; i++)
    {
        if (sieve[i])
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 2 << " ";
        }
    }
    cout << endl;

    return 0;
}