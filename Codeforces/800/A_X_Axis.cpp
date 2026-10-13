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
        vector<int> a(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        int ans = INT_MAX;
        for (int i = 1; i <= 10; i++)
        {
            int cur = 0;
            for (auto num : a)
            {
                cur += abs(num - i);
            }
            ans = min(ans, cur);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}