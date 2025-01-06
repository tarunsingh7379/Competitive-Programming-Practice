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
    int a[n], b[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        mp[b[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 0)
        {
            ans++;
        }
        else if (mp[a[i]] == 1 && a[i] == b[i])
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}