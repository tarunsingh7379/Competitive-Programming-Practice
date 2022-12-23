#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll prefix[100001];

void precompute()
{
    prefix[0] = 0;
    prefix[1] = 1;
    for (int i = 2; i <= 100000; i++)
    {
        prefix[i] = prefix[i - 1] + i;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    precompute();
    while (t)
    {
        ll d, n;
        cin >> d >> n;

        for (ll i = 0; i < d; i++)
        {
            n = prefix[n];
        }
        cout << n << endl;
        t--;
    }

    return 0;
}