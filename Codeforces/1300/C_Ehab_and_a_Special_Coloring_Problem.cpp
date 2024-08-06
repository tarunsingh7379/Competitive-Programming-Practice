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
    vector<int> ans(n + 1, 0);
    int cur = 1;
    for (int i = 2; i <= n; i++)
    {
        if (ans[i] == 0)
        {
            for (int j = i; j <= n; j += i)
            {
                ans[j] = cur;
            }
            cur++;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}