#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    ll ans = 0;
    vector<int> prefix_one(m, 0), prefix_zero(m, 0);
    prefix_one[0] = (b[0] == '1');
    prefix_zero[0] = (b[0] == '0');
    for (int i = 1; i < m; i++)
    {
        prefix_one[i] = prefix_one[i - 1] + (b[i] == '1');
        prefix_zero[i] = prefix_zero[i - 1] + (b[i] == '0');
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
        {
            ans += prefix_one[m - n + i];
            if (i > 0)
            {
                ans -= prefix_one[i - 1];
            }
        }
        else
        {
            ans += prefix_zero[m - n + i];
            if (i > 0)
            {
                ans -= prefix_zero[i - 1];
            }
        }
    }
    cout << ans << endl;

    return 0;
}