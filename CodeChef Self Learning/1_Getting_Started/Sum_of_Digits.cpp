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
        ll sum = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            sum = sum + (s[i] - '0');
        }
        cout << sum << endl;
        t--;
    }

    return 0;
}