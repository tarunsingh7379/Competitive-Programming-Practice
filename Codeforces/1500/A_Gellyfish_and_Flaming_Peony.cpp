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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int ans = 0, g = 0;
        for (int i = 0; i < n; i++)
        {
            g = __gcd(g, a[i]);
        }
        if (mp[g] > 0)
        {
            ans = n - mp[g];
        }
        else
        {
            int cost = INT_MAX;
            mp.erase(g);
            for (auto num : mp)
            {
                vector<int> dis(5001, -1);
                queue<int> q;
                q.push(num.first);
                dis[num.first] = 0;
                while (!q.empty() && dis[g] == -1)
                {
                    int val = q.front();
                    q.pop();
                    for (int i = 0; i < n; i++)
                    {
                        int x = __gcd(val, a[i]);
                        if (dis[x] == -1)
                        {
                            dis[x] = dis[val] + 1;
                            q.push(x);
                        }
                    }
                }
                if (dis[g] != -1)
                {
                    cost = min(cost, dis[g]);
                }
            }
            ans = cost + (n - 1);
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}