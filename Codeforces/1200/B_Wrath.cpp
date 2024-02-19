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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int i = n - 1;
    int killed = n;
    while (i >= 0)
    {
        if (i < killed)
        {
            ans++;
        }
        killed = min(killed, i - a[i]);
        i--;
    }
    cout << ans << endl;

    return 0;
}