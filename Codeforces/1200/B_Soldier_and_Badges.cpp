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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int ans = 0;
    for (int i = 1; i <= 3 * n; i++)
    {
        if (mp[i])
        {
            ans = ans + mp[i] - 1;
            mp[i + 1] += mp[i] - 1;
        }
    }
    cout << ans << endl;
    return 0;
}