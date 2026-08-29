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
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans = min(ans, abs(x));
    }
    cout << ans << endl;

    return 0;
}