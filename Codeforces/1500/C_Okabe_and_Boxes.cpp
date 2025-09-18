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
    stack<int> st;
    int ans = 0;
    int cur = 1;
    for (int i = 0; i < 2 * n; i++)
    {
        string s;
        cin >> s;
        if (s == "add")
        {
            int val;
            cin >> val;
            st.push(val);
        }
        else
        {
            if (!st.empty() && st.top() != cur)
            {
                while (!st.empty())
                {
                    st.pop();
                }
                ans++;
            }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                }
            }
            cur++;
        }
    }
    cout << ans << endl;

    return 0;
}