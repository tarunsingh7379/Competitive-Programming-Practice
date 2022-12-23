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
        ll a[n];
        ll freq[200005] = {0};
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        ll mex = 0;
        while (1)
        {
            if (freq[mex])
            {
                mex++;
            }
            else if (k > 0)
            {
                mex++;
                k--;
            }
            else
            {
                break;
            }
        }
        cout << mex << endl;
        t--;
    }

    return 0;
}