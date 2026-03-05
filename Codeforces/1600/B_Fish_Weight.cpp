#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mp[b[i]]--;
    }
    ll cur = 0;
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        cur += it->second;
        if (cur > 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}