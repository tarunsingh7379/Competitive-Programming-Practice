#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i <= 200005; i++)
    {
        vector<int> cost;
        vector<int> temp = a;
        int cnt = 0, extra = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] != i)
            {
                int x = 0;
                while (a[j] > i)
                {
                    a[j] /= 2;
                    x++;
                }
                if (a[j] == i)
                {
                    cost.push_back(x);
                    cnt++;
                }
            }
            else
            {
                extra++;
                cnt++;
            }
        }

        if (cnt >= k)
        {
            sort(cost.begin(), cost.end());
            int sum = 0;
            int rem = k - extra;
            for (int j = 0; j < rem; j++)
            {
                sum += cost[j];
            }
            ans = min(ans, sum);
        }
        a = temp;
    }
    cout << ans << endl;

    return 0;
}