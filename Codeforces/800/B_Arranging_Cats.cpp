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
        string a, b;
        cin >> a >> b;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' && b[i] == '0')
            {
                cnt1++;
            }
            else if (a[i] == '0' && b[i] == '1')
            {
                cnt2++;
            }
        }
        int ans = max(cnt1, cnt2);
        cout << ans << endl;
        t--;
    }

    return 0;
}