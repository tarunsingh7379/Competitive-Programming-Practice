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
        ll cnt1 = 0, cnt2 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        if (cnt1 <= k && cnt2 <= k)
        {
            cout << "both" << endl;
        }
        else if (cnt1 <= k)
        {
            cout << "chef" << endl;
        }
        else if (cnt2 <= k)
        {
            cout << "brother" << endl;
        }
        else
        {
            cout << "none" << endl;
        }

        t--;
    }

    return 0;
}