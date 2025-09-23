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
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int ans = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == a[j])
        {
            j++;
        }
    }
    ans = n - j;
    cout << ans << endl;

    return 0;
}