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
        string s;
        cin >> s;
        ll n = s.size();
        ll cnt0 = 0, cnt1 = 0, cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        if (cnt0 == n)
        {
            cout << 1 << endl;
        }
        else if (cnt1 == n)
        {
            cout << 0 << endl;
        }
        else
        {
            char last = s[0];
            vector<ll> freq(2, 0);
            for (ll i = 1; i < n; i++)
            {
                if (s[i] != last)
                {
                    freq[last - '0']++;
                }
                last = s[i];
            }
            freq[last - '0']++;
            if (freq[0] == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        t--;
    }

    return 0;
}