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
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int k = i ^ j;
            if (k >= j && k <= n && k < (i + j))
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
