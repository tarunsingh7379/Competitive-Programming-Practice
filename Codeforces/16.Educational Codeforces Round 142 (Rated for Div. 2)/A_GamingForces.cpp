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
        int a[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt += (a[i] == 1);
        }
        int ans = (cnt + 1) / 2 + (n - cnt);
        cout << ans << endl;
        t--;
    }

    return 0;
}