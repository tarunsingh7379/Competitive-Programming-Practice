#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> v(2);
    cin >> v[0];
    cin >> v[1];
    int ans = 0, n = v[0].size(), cnt = 0, last = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        if (v[0][i] == '0')
        {
            cnt++;
        }
        if (v[1][i] == '0')
        {
            cnt++;
        }
        last += cnt;
        if (last >= 3)
        {
            last -= 3;
            ans++;
        }
        else
        {
            last = cnt;
        }
    }
    cout << ans << endl;

    return 0;
}