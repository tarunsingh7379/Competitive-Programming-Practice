#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = k;
    for (int i = 0; i < n; i++)
    {
        int cnt = k / a[i];
        for (int j = i + 1; j < n; j++)
        {
            ans = max(ans, k % a[i] + cnt * a[j]);
        }
    }
    cout << ans << endl;

    return 0;
}