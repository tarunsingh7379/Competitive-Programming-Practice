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
        char mi = 'a';
        for (ll i = 0; i < n; i++)
        {
            if (s[i] > mi)
            {
                if (s[i] - 'a' <= k)
                {
                    mi = s[i];
                }
                else
                {
                    k = k - (mi - 'a');
                    char x = s[i] - k;
                    for (char c = s[i]; c > x; c--)
                    {
                        for (ll j = 0; j < n; j++)
                        {
                            if (s[j] == c)
                            {
                                s[j] = s[j] - 1;
                            }
                        }
                    }
                    break;
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (s[i] <= mi)
            {
                s[i] = 'a';
            }
        }
        cout << s << endl;
        t--;
    }

    return 0;
}