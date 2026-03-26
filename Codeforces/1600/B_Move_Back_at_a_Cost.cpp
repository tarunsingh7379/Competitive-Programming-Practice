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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> suffix(n);
        ll mi = a[n - 1];
        for (ll i = n - 1; i >= 0; i--)
        {
            mi = min(mi, a[i]);
            suffix[i] = mi;
        }
        multiset<ll> st;
        bool switched = false;
        vector<ll> ans;
        for (ll i = 0; i < n; i++)
        {
            if (switched)
            {
                st.insert(a[i] + 1);
                continue;
            }
            if (i + 1 < n)
            {
                if (!st.empty() && *st.begin() < suffix[i + 1])
                {
                    switched = true;
                    ans.push_back(a[i]);
                }
                else if (a[i] > suffix[i + 1])
                {
                    st.insert(a[i] + 1);
                }
                else
                {
                    ans.push_back(a[i]);
                }
            }
            else
            {
                ans.push_back(a[i]);
            }
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        for (auto num : st)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}