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
        ll n, a, b;
        cin >> n >> a >> b;
        set<char> st = {'E', 'Q', 'U', 'I', 'N', 'O', 'X'};
        ll sar = 0, anu = 0;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (st.count(s[0]))
            {
                sar += a;
            }
            else
            {
                anu += b;
            }
        }
        if (sar > anu)
        {
            cout << "SARTHAK" << endl;
        }
        else if (sar == anu)
        {
            cout << "DRAW" << endl;
        }
        else
        {
            cout << "ANURADHA" << endl;
        }
        t--;
    }

    return 0;
}