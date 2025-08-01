#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.size();
    for (int ans = 200; ans >= 0; ans--)
    {
        for (int i = 0; i < n; i++)
        {
            bool ok = true;
            for (int j = 0; j < ans; j++)
            {
                if (i + j + ans >= n + k)
                {
                    ok = false;
                    break;
                }
                if (i + j + ans >= n)
                {
                    continue;
                }
                if (s[i + j] != s[i + j + ans])
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                cout << 2 * ans << endl;
                return 0;
            }
        }
    }

    return 0;
}