#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        st.insert(i);
    }
    vector<int> ans(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        auto it = st.lower_bound(l);
        vector<int> temp;
        while (it != st.end() && *it <= r)
        {
            if (*it == x)
            {
                it++;
                continue;
            }
            ans[*it] = x;
            temp.push_back(*it);
            it++;
        }
        for (auto num : temp)
        {
            st.erase(num);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}