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
        string s;
        cin >> s;
        for (ll i = 0; i < (n - 1); i += 2)
        {
            swap(s[i], s[i + 1]);
        }
        for (ll i = 0; i < n; i++)
        {
            s[i] = (25 - (s[i] - 'a')) + 'a';
        }
        cout << s << endl;
        t--;
    }

    return 0;
}