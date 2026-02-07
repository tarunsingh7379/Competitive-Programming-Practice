#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int n, int m, vector<string> &v)
{
    bool ok = true;
    set<char> st, st2;
    if (n % 3 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                st.insert(v[i][j]);
            }
            if ((i == (n / 3 - 1)) || (i == (2 * n / 3 - 1)) || (i == n - 1))
            {
                if (st.size() != 1)
                {
                    ok = false;
                }
                st2.insert(*st.begin());
                st.clear();
            }
            if (!ok)
                break;
        }
        if (ok && st2.size() == 3)
            return true;
    }
    if (m % 3 == 0)
    {
        st.clear();
        st2.clear();
        ok = true;
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                st.insert(v[i][j]);
            }
            if ((j == m / 3 - 1) || (j == 2 * m / 3 - 1) || (j == m - 1))
            {
                if (st.size() != 1)
                {
                    ok = false;
                }
                st2.insert(*st.begin());
                st.clear();
            }
            if (!ok)
                break;
        }
        if (ok && st2.size() == 3)
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    cout << (check(n, m, v) ? "YES" : "NO") << endl;

    return 0;
}