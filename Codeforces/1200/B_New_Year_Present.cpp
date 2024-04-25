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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string ans = "";
    ll put = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            ll put = 0;
            if ((ans.size() && ans.back() == 'L'))
            {
                ans.push_back('R');
            }
            if (a[i] == 0)
            {
                ans.push_back('R');
            }
            while (put < a[i])
            {
                put++;
                ans.push_back('P');
                ans.push_back('R');
                ans.push_back('L');
            }
        }
        else
        {
            ll put = 0;
            if ((ans.size() && ans.back() == 'L'))
            {
                ans.push_back('R');
            }
            while (put < a[i])
            {
                put++;
                ans.push_back('P');
                ans.push_back('L');
                ans.push_back('R');
            }
        }
    }
    cout << ans << endl;

    return 0;
}