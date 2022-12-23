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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> curr(3, 0), next(3, 0);
    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int prev = 0; prev < 3; prev++)
        {
            int ans = 1e5;
            if (a[ind] == 1)
            {
                if (prev != 2)
                {
                    ans = min(ans, next[2]);
                }
            }
            else if (a[ind] == 2)
            {
                if (prev != 1)
                {
                    ans = min(ans, next[1]);
                }
            }
            else if (a[ind] == 3)
            {
                if (prev != 1)
                {
                    ans = min(ans, next[1]);
                }
                if (prev != 2)
                {
                    ans = min(ans, next[2]);
                }
            }
            ans = min(ans, 1 + next[0]);
            curr[prev] = ans;
        }
        next = curr;
    }

    cout << next[0] << endl;

    return 0;
}