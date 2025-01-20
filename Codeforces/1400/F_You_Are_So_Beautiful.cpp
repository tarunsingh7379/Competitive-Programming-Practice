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
        vector<int> suffix(n, 0);
        set<int> st;
        for (int i = n - 1; i >= 0; i--)
        {
            st.insert(a[i]);
            suffix[i] = st.size();
        }
        set<int> prefix;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (!prefix.count(a[i]))
            {
                prefix.insert(a[i]);
                ans = ans + suffix[i];
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}