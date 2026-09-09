#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        if (n % 2 != k % 2 || k * k > n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        t--;
    }

    return 0;
}