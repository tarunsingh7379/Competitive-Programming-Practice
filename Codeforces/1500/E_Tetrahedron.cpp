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
    vector<int> curr(4, 0), next(4, 0);
    next[3] = 1;
    for (int cnt = n - 1; cnt >= 0; cnt--)
    {
        for (int x = 0; x <= 3; x++)
        {
            ll ans = 0;
            for (int k = 0; k <= 3; k++)
            {
                if (x != k)
                {
                    ans = (ans + next[k]) % M;
                }
            }
            curr[x] = ans;
        }
        next = curr;
    }
    cout << next[3] << "\n";

    return 0;
}