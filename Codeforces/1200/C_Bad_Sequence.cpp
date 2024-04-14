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
    int cnt = 0;
    for (auto c : s)
    {
        if (c == '(')
        {
            st.push('(');
        }
        else if (!st.empty())
        {
            st.pop();
        }
        else
        {
            cnt++;
        }
    }
    if (st.empty())
    {
        if (cnt == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        if (cnt == 1 && st.size() == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}