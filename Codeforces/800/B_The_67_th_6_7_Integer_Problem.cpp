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
        int a[7];
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 7);
        int ans = -1e5;
        do
        {
            int sum = 0;
            for (int i = 0; i < 6; i++)
            {
                sum -= a[i];
            }
            sum += a[6];
            ans = max(ans, sum);
        } while (next_permutation(a, a + 7));
        cout << ans << endl;
        t--;
    }

    return 0;
}