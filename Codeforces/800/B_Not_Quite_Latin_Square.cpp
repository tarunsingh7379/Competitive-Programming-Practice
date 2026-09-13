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
        vector<string> v;
        for (int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        char ans;
        for (int i = 0; i < 3; i++)
        {
            set<char> st;
            st.insert('A');
            st.insert('B');
            st.insert('C');
            for (int j = 0; j < 3; j++)
            {
                st.erase(v[i][j]);
            }
            if (st.size() == 1)
            {
                ans = *st.begin();
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}