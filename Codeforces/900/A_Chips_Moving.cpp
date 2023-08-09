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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int cost = 0;
        for (int j = 0; j < n; j++)
        {
            if (abs(a[i] - a[j]) % 2 == 1)
            {
                cost++;
            }
        }
        ans = min(ans, cost);
    }
    cout << ans << endl;

    return 0;
}