#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int ans = 0;
    for (int i = 0; i <= max(0, n - m); i++)
    {
        string s = a.substr(i, m);
        if (s == b)
        {
            ans++;
            i = i + m - 1;
        }
    }
    cout << ans << endl;

    return 0;
}