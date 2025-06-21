#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> st;
    for (auto c : s)
    {
        st.insert(c);
    }
    if (k <= n)
    {
        string ans = s.substr(0, k);
        for (int i = k - 1; i >= 0; i--)
        {
            auto it = st.upper_bound(s[i]);
            if (it != st.end())
            {
                ans[i] = *it;
                for (int j = i + 1; j < k; j++)
                {
                    ans[j] = *st.begin();
                }
                break;
            }
        }
        cout << ans << endl;
    }
    else
    {
        string ans = s;
        for (int i = n; i < k; i++)
        {
            ans.push_back(*st.begin());
        }
        cout << ans << endl;
    }

    return 0;
}