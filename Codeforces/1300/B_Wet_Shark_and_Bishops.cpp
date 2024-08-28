#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp1[x + y]++;
        mp2[x - y]++;
    }
    ll ans = 0;
    for (auto num : mp1)
    {
        ans = ans + (num.second * (num.second - 1) / 2);
    }
    for (auto num : mp2)
    {
        ans = ans + (num.second * (num.second - 1) / 2);
    }
    cout << ans << endl;

    return 0;
}