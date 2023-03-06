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

    int have = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x >= 0)
        {
            have += x;
        }
        else
        {
            if (have > 0)
            {
                have--;
            }
            else
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}