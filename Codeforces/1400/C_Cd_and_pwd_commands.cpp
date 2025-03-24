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
    stack<string> st;
    st.push("/");
    while (t)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "pwd")
        {
            stack<string> temp = st;
            vector<string> ans;
            while (!temp.empty())
            {
                ans.push_back(temp.top());
                temp.pop();
            }
            for (int i = ans.size() - 1; i >= 0; i--)
            {
                cout << ans[i];
            }
            if (ans[0] != "/")
                cout << "/";
            cout << endl;
        }
        else
        {
            string path;
            cin >> path;
            int i = 0;
            if (path[0] == '/')
            {
                while (!st.empty())
                {
                    st.pop();
                }
            }
            while (i < path.size())
            {
                if (path[i] == '/')
                {
                    if (st.empty() || st.top() != "/")
                        st.push("/");
                    i++;
                }
                else if (path[i] == '.')
                {
                    while (!st.empty() && st.top() == "/")
                    {
                        st.pop();
                    }
                    if (!st.empty())
                        st.pop();
                    i += 2;
                }
                else
                {
                    string s;
                    if (st.top() != "/")
                    {
                        s.push_back('/');
                    }
                    while (i < path.size() && path[i] != '.' && path[i] != '/')
                    {
                        s.push_back(path[i]);
                        i++;
                    }
                    st.push(s);
                }
            }
        }
        t--;
    }

    return 0;
}