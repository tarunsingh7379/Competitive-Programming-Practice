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
    int cnt = 0;
    stack<char> st;
    for (auto c : s)
    {
        if (!st.empty() && st.top() == c)
        {
            st.pop();
            cnt++;
        }
        else
        {
            st.push(c);
        }
    }
    if (cnt % 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}