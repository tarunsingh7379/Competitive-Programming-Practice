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
    vector<int> a(n - 1);
    for (auto &num : a)
    {
        cin >> num;
    }

    int mi = 0, ma = 0;
    vector<int> prefix(n - 1);
    prefix[0] = a[0];
    mi = min(mi, prefix[0]);
    ma = max(ma, prefix[0]);
    for (int i = 1; i < n - 1; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
        mi = min(mi, prefix[i]);
        ma = max(ma, prefix[i]);
    }
    ll x = 1 - mi;
    ll y = n - ma;
    if (x == y)
    {
        set<int> st;
        for (int i = 1; i <= n; i++)
        {
            st.insert(i);
        }
        vector<int> ans;
        ans.push_back(x);
        st.erase(x);
        for (int i = 0; i < n - 1; i++)
        {
            ans.push_back(x + prefix[i]);
            st.erase(x + prefix[i]);
        }
        if (st.empty())
        {
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}