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
        int h, m;
        cin >> h >> m;
        int ans = 60 - m + (23 - h) * 60;
        cout << ans << endl;
        t--;
    }

    return 0;
}