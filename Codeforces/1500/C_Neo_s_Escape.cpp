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
        vector<int> v;
        v.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            if (a[i] != v.back())
            {
                v.push_back(a[i]);
            }
        }
        int ans = 0;
        n = v.size();
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                ans++;
            }
        }
        if (n >= 2 && v[0] > v[1])
        {
            ans++;
        }
        if (n >= 2 && v[n - 1] > v[n - 2])
        {
            ans++;
        }
        if (ans == 0)
        {
            ans++;
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}