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
    map<int, int> mp;
    for (auto num : a)
    {
        int mx = 0;
        for (int i = 1; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                if (i > 1)
                    mx = max(mx, mp[i]);
                mx = max(mx, mp[num / i]);
            }
        }
        mx++;
        for (int i = 1; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                if (i > 1)
                    mp[i] = mx;
                mp[num / i] = mx;
            }
        }
    }
    int ans = 0;
    for (auto num : mp)
    {
        ans = max(ans, num.second);
    }
    cout << ans << endl;

    return 0;
}