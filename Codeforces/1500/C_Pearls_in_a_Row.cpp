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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int> st;
    int l = 1;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (st.count(a[i]))
        {
            ans.push_back({l, i + 1});
            l = i + 2;
            st.clear();
        }
        else
        {
            st.insert(a[i]);
        }
    }
    if (!st.empty() && ans.size() > 0)
    {
        int sz = ans.size();
        ans[sz - 1].second = n;
    }
    if (ans.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans.size() << endl;
        for (auto num : ans)
        {
            cout << num.first << " " << num.second << endl;
        }
        cout << endl;
    }

    return 0;
}