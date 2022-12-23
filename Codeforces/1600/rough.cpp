#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

//It will compute xor from 1 to n
int compute_xor(int n)
{
    int ans;
    if (n % 4 == 0)
    {
        ans = n;
    }
    else if (n % 4 == 1)
    {
        ans = 1;
    }
    else if (n % 4 == 2)
    {
        ans = n + 1;
    }
    else if (n % 4 == 3)
    {
        ans = 0;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll ans = 0;
    for (ll i = 1; i <= 1021; i++)
    {
        ans = ans ^ i;
    }
    cout << ans << endl;

    return 0;
}