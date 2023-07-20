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
    string s;
    cin >> s;

    stack<char> st;

    for (auto c : s)
    {
        if (!st.empty() && st.top() != c)
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    int ans = 0;
    while (!st.empty())
    {
        st.pop();
        ans++;
    }
    cout << ans << endl;

    return 0;
}