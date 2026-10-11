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
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        sort(v.begin(), v.end());
        while (v[0] != v[1] && v[1] != v[2])
        {
            v[0]++;
            v[2]--;
            sort(v.begin(), v.end());
            ans++;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}