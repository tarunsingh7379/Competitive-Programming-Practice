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
    stack<int> st;
    vector<int> start_pos(n, -1);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else
        {
            if (!st.empty())
            {
                start_pos[i] = st.top();
                st.pop();
                if (start_pos[i] - 1 >= 0 && s[start_pos[i] - 1] == ')')
                {
                    if (start_pos[start_pos[i] - 1] != -1)
                    {
                        start_pos[i] = start_pos[start_pos[i] - 1];
                    }
                    int len = i - start_pos[i] + 1;
                    mp[len]++;
                }
                else
                {
                    int len = i - start_pos[i] + 1;
                    mp[len]++;
                }
            }
        }
    }
    int max_len = 0, count = 1;
    for (auto it : mp)
    {
        if (it.first > max_len)
        {
            max_len = it.first;
            count = it.second;
        }
    }
    cout << max_len << " " << count << endl;

    return 0;
}