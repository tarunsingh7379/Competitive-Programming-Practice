#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(string &a, string &b)
{
    int n = a.size(), m = b.size();
    for (int i = 0; i <= n - m; i++)
    {
        if (a.substr(i, m) == b)
            return true;
    }
    return false;
}

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
        string a, b;
        cin >> a >> b;
        int ans = 0;
        while (a.size() < 2 * b.size() || ans < 4)
        {
            if (check(a, b))
                break;
            a = a + a;
            ans++;
        }
        if (check(a, b))
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}