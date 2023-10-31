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
    int n = s.size();
    set<char> st;
    st.insert('A');
    st.insert('E');
    st.insert('I');
    st.insert('O');
    st.insert('U');
    st.insert('Y');
    int last = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.count(s[i]))
        {
            ans = max(ans, i + 1 - last);
            last = i + 1;
        }
    }
    ans = max(ans, n + 1 - last);
    cout << ans << endl;

    return 0;
}