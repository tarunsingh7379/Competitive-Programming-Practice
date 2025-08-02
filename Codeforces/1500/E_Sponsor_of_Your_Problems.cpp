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
        string l, r;
        cin >> l >> r;
        int ans = 0, n = l.size();
        if (l == r)
        {
            ans = 2 * n;
        }
        else
        {
            int ind = 0;
            while (ind < n && l[ind] == r[ind])
            {
                ind++;
            }
            if (r[ind] - l[ind] >= 2)
            {
                ans = 2 * ind;
            }
            else
            {
                ans = 2 * ind + 1;
                for (int i = ind + 1; i < n; i++)
                {
                    if (l[i] == '9' && r[i] == '0')
                    {
                        ans++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}