#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    stack<char> st;
    string ans;
    for (auto c : s)
    {
        if (st.empty())
        {
            st.push(c);
        }
        else
        {
            if (st.top() == c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
    }
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}