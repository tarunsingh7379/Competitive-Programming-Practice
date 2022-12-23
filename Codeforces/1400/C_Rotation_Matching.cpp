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

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    map<int, int> pos;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        pos[b[i]] = i;
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int cost = (pos[a[i]] - i + n) % n;
        mp[cost]++;
    }
    int ans = 0;
    for (auto num : mp)
    {
        ans = max(ans, num.second);
    }
    cout << ans << endl;
    return 0;
}