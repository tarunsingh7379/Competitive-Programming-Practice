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
    map<pair<int, int>, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[{x, y}]++;
        ans = max(ans, mp[{x, y}]);
    }
    cout << ans << endl;

    return 0;
}