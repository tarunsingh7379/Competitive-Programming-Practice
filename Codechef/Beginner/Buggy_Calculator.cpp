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
        string a, b;
        cin >> a >> b;
        string ans;
        ll i = a.size() - 1, j = b.size() - 1;
        while (i >= 0 && j >= 0)
        {
            ll x = ((a[i] - '0') + (b[j] - '0')) % 10;
            ans.push_back(x + '0');
            i--;
            j--;
        }
        while (i >= 0)
        {
            ans.push_back(a[i]);
            i--;
        }
        while (j >= 0)
        {
            ans.push_back(b[j]);
            j--;
        }
        reverse(ans.begin(), ans.end());
        while (ans.size() > 1)
        {
            if (*ans.begin() == '0')
            {
                ans.erase(ans.begin());
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}