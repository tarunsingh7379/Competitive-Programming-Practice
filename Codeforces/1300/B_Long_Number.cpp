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
    string s;
    cin >> s;
    vector<ll> f(10);
    for (ll i = 1; i <= 9; i++)
    {
        cin >> f[i];
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] - '0' < f[s[i] - '0'])
        {
            while (i < s.size() && s[i] - '0' <= f[s[i] - '0'])
            {
                s[i] = f[s[i] - '0'] + '0';
                i++;
            }
            break;
        }
    }
    cout << s << endl;

    return 0;
}