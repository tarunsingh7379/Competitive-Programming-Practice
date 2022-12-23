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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        multimap<int, pair<int, int>> mp;
        int l = 0, r = n - 1;
        set<int> st;
        while (l < r)
        {
            int sum = a[l] + a[r];
            int s1 = min(a[l], a[r]) - sum;
            int s2 = max(a[l], a[r]) - sum;
            mp.insert({sum, {s1, s2}});
            st.insert(sum);
            l++;
            r--;
        }

        ll sum1 = 0, sum2 = 0, sz = mp.size();
        for (auto num : mp)
        {
            sum2 += num.second.second;
        }
        ll prev = 0;
        int cnt = 0, ans = INT_MAX;
        for (auto num : mp)
        {
            sum1 = prev;
            sum2 -= num.second.second;
            int next = sz - cnt - 1;
            int d1 = cnt * k - (sum1 + cnt * num.first);
            int d2 = sum2 + next * num.first;
            int cost = 0;
            if (d1 < 0)
            {
                d1 = -d1;
                cost = (d1 + k - 1) / k;
            }
            if (d2 < 0)
            {
                d2 = -d2;
                cost = (d2 + k - 1) / k;
            }
            prev += num.second.first;
            ans = min(ans, cost);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}