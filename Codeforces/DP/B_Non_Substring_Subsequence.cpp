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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            bool ok = false;
            for (int i = 0; i < l; i++)
            {
                if (s[i] == s[l])
                {
                    ok = true;
                    break;
                }
            }
            for (int i = r + 1; i < n; i++)
            {
                if (s[i] == s[r])
                {
                    ok = true;
                    break;
                }
            }
            cout << (ok ? "YES" : "NO") << endl;
        }
        t--;
    }

    return 0;
}