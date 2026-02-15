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
        string s;
        cin >> s;
        ll pos;
        cin >> pos;
        ll len = s.size();
        while (pos > len)
        {
            pos -= len;
            len--;
        }
        ll remove = s.size() - len;
        string st;
        for (auto c : s)
        {
            while (st.size() > 0 && st.back() > c && remove > 0)
            {
                st.pop_back();
                remove--;
            }
            st.push_back(c);
        }
        while (st.size() > 0 && remove > 0)
        {
            st.pop_back();
            remove--;
        }
        cout << st[pos - 1];
        t--;
    }

    return 0;
}