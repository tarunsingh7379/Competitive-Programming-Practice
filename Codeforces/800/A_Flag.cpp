#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int flag = 1;
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        set<char> st(s.begin(), s.end());
        if (st.size() != 1)
        {
            flag = 0;
        }
        else
        {
            v.push_back(s[0]);
        }
    }
    if (flag == 1)
    {
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                flag = 0;
                break;
            }
        }
    }

    cout << (flag == 1 ? "YES" : "NO") << endl;

    return 0;
}