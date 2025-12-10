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
    while (t)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> left(n, -1), right(n, n);
        if (s[0] == '0')
        {
            left[0] = 0;
        }
        if (s[n - 1] == '1')
        {
            right[n - 1] = n - 1;
        }
        for (int i = 1; i < n; i++)
        {
            left[i] = left[i - 1];
            if (s[i] == '0')
            {
                left[i] = i;
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = right[i + 1];
            if (s[i] == '1')
            {
                right[i] = i;
            }
        }
        set<pair<int, int>> st;
        for (int i = 0; i < m; i++)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            int x = right[l];
            int y = left[r];
            if (x >= y)
            {
                st.insert({-1, -1});
            }
            else
            {
                st.insert({x, y});
            }
        }
        cout << st.size() << endl;
        t--;
    }

    return 0;
}