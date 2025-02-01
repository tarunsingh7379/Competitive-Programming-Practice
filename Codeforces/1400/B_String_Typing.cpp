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
    string s;
    cin >> s;
    int ans = n;
    for (int i = 1; 2 * i - 1 < n; i++)
    {
        int ok = 1;
        for (int j = 0; j < i; j++)
        {
            if (s[j] != s[j + i])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            ans = min(ans, n - (i - 1));
        }
    }
    cout << ans << endl;

    return 0;
}