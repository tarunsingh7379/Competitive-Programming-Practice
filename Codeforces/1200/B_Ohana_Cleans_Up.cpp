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
    map<string, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        ans = max(ans, mp[s]);
    }
    cout << ans << endl;

    return 0;
}