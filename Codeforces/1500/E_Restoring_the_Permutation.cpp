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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans(n, 0);
        ans[0] = a[0];
        set<int> st1;
        for (int i = 1; i <= n; i++)
        {
            st1.insert(i);
        }
        st1.erase(ans[0]);
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                ans[i] = a[i];
                st1.erase(ans[i]);
            }
        }
        set<int> st2 = st1;
        vector<int> ans1 = ans;
        for (ll i = 0; i < n; i++)
        {
            if (ans1[i] == 0)
            {
                ans1[i] = *st1.begin();
                st1.erase(st1.begin());
            }
        }
        vector<int> ans2 = ans;
        for (ll i = 0; i < n; i++)
        {
            if (ans2[i] == 0)
            {
                auto it = st2.lower_bound(ans2[i - 1]);
                it--;
                ans2[i] = *it;
                st2.erase(it);
            }
        }
        for (auto num : ans1)
        {
            cout << num << " ";
        }
        cout << endl;
        for (auto num : ans2)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}