#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(string s, set<char> in)
{
    stack<char> st;
    for (auto c : s)
    {
        if (in.count(c))
        {
            st.push('(');
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        string s;
        cin >> s;
        int ans = 0;

        {
            set<char> in;
            in.insert('A');
            in.insert('B');
            in.insert('C');

            ans |= check(s, in);
        }

        {
            set<char> in;
            in.insert('A');
            in.insert('B');

            ans |= check(s, in);
        }

        {
            set<char> in;
            in.insert('A');
            in.insert('C');

            ans |= check(s, in);
        }

        {
            set<char> in;
            in.insert('B');
            in.insert('C');

            ans |= check(s, in);
        }
        {
            set<char> in;
            in.insert('A');

            ans |= check(s, in);
        }
        {
            set<char> in;

            in.insert('B');

            ans |= check(s, in);
        }
        {
            set<char> in;

            in.insert('C');

            ans |= check(s, in);
        }
        cout << (ans ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}