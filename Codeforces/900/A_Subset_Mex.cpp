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
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int ans = 0;
        int mex = 0;
        while (mp[mex])
        {
            mp[mex]--;
            mex++;
        }
        ans += mex;
        mex = 0;
        while (mp[mex])
        {
            mp[mex]--;
            mex++;
        }
        ans += mex;
        cout << ans << endl;
        t--;
    }

    return 0;
}