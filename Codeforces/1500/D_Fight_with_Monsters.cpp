#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, k;
    cin >> n >> a >> b >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> cost;
    for (auto num : v)
    {
        int x = num % (a + b);
        int extra = 0;
        if (x == 0)
        {
            extra = b;
        }
        else if (x > a)
        {
            extra = x - a;
        }
        cost.push_back((extra + a - 1) / a);
    }
    sort(cost.begin(), cost.end());
    int ans = 0;
    for (auto num : cost)
    {
        k -= num;
        if (k >= 0)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}