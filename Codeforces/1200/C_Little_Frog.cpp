#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll l = 1, r = n;
    ll flag = 1;
    while (l <= r)
    {
        if (flag)
        {
            cout << l << " ";
            l++;
        }
        else
        {
            cout << r << " ";
            r--;
        }
        flag ^= 1;
    }

    return 0;
}