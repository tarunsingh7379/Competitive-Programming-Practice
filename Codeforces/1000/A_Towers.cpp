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
    map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        ans = max(ans, mp[x]);
    }
    cout << ans << " " << mp.size() << endl;

    return 0;
}