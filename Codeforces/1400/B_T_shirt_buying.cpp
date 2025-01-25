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
    set<int> st1, st2, st3;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            st1.insert(p[i]);
        }
        else if (x == 2)
        {
            st2.insert(p[i]);
        }
        else
        {
            st3.insert(p[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            st1.insert(p[i]);
        }
        else if (x == 2)
        {
            st2.insert(p[i]);
        }
        else
        {
            st3.insert(p[i]);
        }
    }

    int m;
    cin >> m;
    int ans = -1;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            ans = -1;
            if (st1.size())
            {
                ans = *st1.begin();
            }
        }
        else if (x == 2)
        {
            ans = -1;
            if (st2.size())
            {
                ans = *st2.begin();
            }
        }
        else
        {
            ans = -1;
            if (st3.size())
            {
                ans = *st3.begin();
            }
        }
        st1.erase(ans);
        st2.erase(ans);
        st3.erase(ans);
        cout << ans << " ";
    }

    return 0;
}