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
    set<int> st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        int x;
        cin >> x;
        if (c == '+')
        {
            st.insert(x);
        }
        else
        {
            if (st.count(x))
            {
                st.erase(x);
            }
            else
            {
                ans++;
            }
        }
        ans = max(ans, (int)st.size());
    }
    cout << ans << endl;
    return 0;
}