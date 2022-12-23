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
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
    }
    int ans = 1;
    int prev = a[0].first;
    for (int i = 1; i < n - 1; i++)
    {
        int left = a[i].first - a[i].second;
        if (left > prev)
        {
            ans++;
            prev = a[i].first;
        }
        else
        {
            int right = a[i].first + a[i].second;
            if (right < a[i + 1].first)
            {
                ans++;
                prev = right;
            }
            else
            {
                prev = a[i].first;
            }
        }
    }
    if (n > 1)
    {
        ans++;
    }
    cout << ans << endl;
    return 0;
}