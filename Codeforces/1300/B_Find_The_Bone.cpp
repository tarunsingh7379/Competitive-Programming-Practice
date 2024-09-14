#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    int pos = 1;
    int ans = -1;
    while (k--)
    {
        int u, v;
        cin >> u >> v;
        if (st.count(pos))
        {
            ans = pos;
            break;
        }
        if (u == pos)
        {
            pos = v;
        }
        else if (v == pos)
        {
            pos = u;
        }
    }
    cout << (ans != -1 ? ans : pos) << endl;
    return 0;
}