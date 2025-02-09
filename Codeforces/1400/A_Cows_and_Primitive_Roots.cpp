#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int x, int p)
{
    int prod = 1;
    for (int i = 1; i <= p - 2; i++)
    {
        prod = (prod * x) % p;
        if ((prod - 1 + p) % p == 0)
        {
            return false;
        }
    }
    prod = (prod * x) % p;
    if ((prod - 1 + p) % p == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p;
    cin >> p;
    int ans = 0;
    for (int num = 1; num < p; num++)
    {
        if (check(num, p))
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}