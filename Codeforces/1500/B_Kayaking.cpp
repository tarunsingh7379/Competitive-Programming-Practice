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
    int a[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 2 * n);
    int ans = INT_MAX;
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = i + 1; j < 2 * n; j++)
        {
            int first = -1, second = -1, cost = 0;
            for (int k = 0; k < 2 * n; k++)
            {
                if (k == i || k == j)
                {
                    continue;
                }
                if (first == -1)
                {
                    first = a[k];
                }
                else
                {
                    second = a[k];
                    cost += (second - first);
                    second = -1;
                    first = -1;
                }
            }
            ans = min(ans, cost);
        }
    }
    cout << ans << endl;
    return 0;
}