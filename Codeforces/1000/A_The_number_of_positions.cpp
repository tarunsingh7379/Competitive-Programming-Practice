#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 0; i <= b; i++)
    {
        int after = n - (i + 1);
        if (after >= a)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}