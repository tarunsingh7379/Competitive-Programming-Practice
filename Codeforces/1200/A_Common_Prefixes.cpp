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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<string> v;
        v.push_back(string(100, 'a'));
        for (ll i = 0; i < n; i++)
        {
            string s = v.back();
            if (s[a[i]] == 'a')
            {
                s[a[i]] = 'b';
            }
            else
            {
                s[a[i]] = 'a';
            }

            v.push_back(s);
        }
        for (auto num : v)
        {
            cout << num << endl;
        }
        t--;
    }

    return 0;
}