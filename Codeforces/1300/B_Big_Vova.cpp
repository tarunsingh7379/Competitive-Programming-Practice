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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        reverse(a, a + n);
        vector<int> vis(n, 0);
        vector<int> ans;
        int g = 0, ind = 0, ma = 0;
        for (int i = 0; i < n; i++)
        {
            ma = 0;
            for (int j = 0; j < n; j++)
            {
                if (!vis[j])
                {
                    int temp = __gcd(g, a[j]);
                    if (temp > ma)
                    {
                        ma = temp;
                        ind = j;
                    }
                }
            }
            ans.push_back(a[ind]);
            vis[ind] = 1;
            g = __gcd(g, ans.back());
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