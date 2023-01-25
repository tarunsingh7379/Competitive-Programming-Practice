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
        string s;
        cin >> s;
        int l = 0;
        for (ll r = 0; r < n; r++)
        {
            if (s[r] == '0')
            {
                ll req = r - l;
                if (req <= k)
                {
                    swap(s[l], s[r]);
                    k -= req;
                    l++;
                }
                else
                {
                    swap(s[r - k], s[r]);
                    break;
                }
            }
        }
        cout << s << endl;
        t--;
    }

    return 0;
}