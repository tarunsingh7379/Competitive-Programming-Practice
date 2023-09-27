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
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<pair<char, char>> st;
        int flag = 0;
        if (n <= 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            st.insert({s[0], s[1]});
            for (int i = 2; i < n - 1; i++)
            {
                if (st.count({s[i], s[i + 1]}))
                {
                    flag = 1;
                    break;
                }
                else
                {
                    st.insert({s[i - 1], s[i]});
                }
            }
            cout << (flag ? "YES" : "NO") << endl;
        }

        t--;
    }

    return 0;
}