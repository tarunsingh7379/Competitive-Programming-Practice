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
    for (auto c : s)
    {
        if (st.empty())
        {
            st.push(c);
            continue;
        }
        if (st.top() == c)
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    if (st.empty())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}