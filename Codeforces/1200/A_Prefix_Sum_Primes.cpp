#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int sieve[600005];

void createSieve()
{
    int n = 600000;
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
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    createSieve();
    vector<int> pr;
    int ind = 0;
    for (int i = 2; i <= 600000; i++)
    {
        if (sieve[i])
        {
            pr.push_back(i);
        }
    }
    int last = 0;
    if (b)
    {
        cout << 2 << " ";
        b--;
        ind++;
        last = 2;
    }

    if (ind == 1 && a > 0)
    {
        ind++;
        cout << 1 << " ";
        last = 3;
        a--;
    }

    for (; ind < pr.size(); ind++)
    {
        int cost = pr[ind] - last;
        while (cost > 1 && b > 0)
        {
            cout << 2 << " ";
            cost -= 2;
            b--;
        }
        while (cost > 0 && a > 0)
        {
            cout << 1 << " ";
            cost--;
            a--;
        }
        if (a == 0 && b == 0)
        {
            break;
        }
        last = pr[ind];
    }

    return 0;
}