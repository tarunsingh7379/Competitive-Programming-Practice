#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll fact[101];

void precompute()
{
    fact[0] = 1;
    for (ll i = 1; i <= 100; i++)
    {
        fact[i] = fact[i - 1] * i;
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
        ll n;
        cin >> n;
        cout << fact[n] << endl;
        t--;
    }

    return 0;
}