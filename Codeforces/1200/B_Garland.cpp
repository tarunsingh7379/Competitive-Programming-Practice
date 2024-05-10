#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    map<char, int> mp1, mp2;
    for (auto c : a)
    {
        mp1[c]++;
    }
    for (auto c : b)
    {
        mp2[c]++;
    }
    ll ans = 0;
    for (auto num : mp2)
    {
        ll d = min(num.second, mp1[num.first]);
        if (d == 0)
        {
            ans = -1;
            break;
        }
        ans = ans + d;
    }
    cout << ans << endl;

    return 0;
}