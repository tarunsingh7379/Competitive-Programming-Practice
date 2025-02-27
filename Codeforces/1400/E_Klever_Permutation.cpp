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
        vector<int> ans(n, 0);
        int even = 1, odd = n;
        for (int i = 0; i < k; i++)
        {
            for (int j = i; j < n; j += k)
            {
                if (j & 1)
                {
                    ans[j] = odd--;
                }
                else
                {
                    ans[j] = even++;
                }
            }
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}