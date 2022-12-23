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
    string a, b;
    cin >> a >> b;

    int ans = 0, i = 0;
    while (i < n)
    {
        if (a[i] != b[i])
        {
            if (i + 1 < n && a[i + 1] != b[i + 1] && a[i] != a[i + 1])
            {
                ans++;
                i += 2;
            }
            else
            {
                ans++;
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    cout << ans << endl;

    return 0;
}