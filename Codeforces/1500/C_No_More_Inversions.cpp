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
        int a[n];
        for (int i = 0; i < k; i++)
        {
            a[i] = i + 1;
        }
        int x = k - 1;
        for (int i = k; i < n; i++)
        {
            a[i] = x;
            x--;
        }
        vector<int> used(n + 1, 0);
        vector<int> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            if (used[a[i]])
            {
                continue;
            }
            ans.push_back(a[i]);
            used[a[i]] = 1;
        }
        reverse(ans.begin(), ans.end());
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}