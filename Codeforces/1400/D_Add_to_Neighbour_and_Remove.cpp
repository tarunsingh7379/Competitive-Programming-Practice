#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int get_cost(int k, vector<int> &a)
{
    int n = a.size();
    int sum = 0, cnt = 0, cost = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        cnt++;
        if (sum == k)
        {
            cost += (cnt - 1);
            sum = 0;
            cnt = 0;
        }
        else if (sum > k)
        {
            return 1e8;
        }
    }
    if (sum != 0)
    {
        cost = 1e8;
    }
    return cost;
}

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
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int ans = n - 1;
        for (int i = 1; i * i <= sum; i++)
        {
            if (sum % i == 0)
            {
                ans = min(ans, get_cost(i, a));
                ans = min(ans, get_cost(sum / i, a));
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}