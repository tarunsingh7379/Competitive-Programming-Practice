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
        string x = "codeforces";
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            ans += (s[i] != x[i]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}