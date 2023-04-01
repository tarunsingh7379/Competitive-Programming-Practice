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
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        int rem = n - i;
        if (rem % i == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}