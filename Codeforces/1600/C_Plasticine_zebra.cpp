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
    int n = s.size();
    string x = s + s;
    int last = 0, ans = 0;
    for (int i = 1; i < 2 * n; i++)
    {
        if (x[i] == x[i - 1] || i - last >= n)
        {
            ans = max(ans, i - last);
            last = i;
        }
    }
    cout << ans << endl;

    return 0;
}