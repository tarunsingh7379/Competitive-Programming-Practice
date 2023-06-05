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
        int n, k;
        cin >> n >> k;

        int ans = (n - 1 + k - 1) / k + 1;
        cout << ans << endl;
        t--;
    }

    return 0;
}