#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s, t;
    cin >> n >> s >> t;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    s--;
    t--;
    int ans = 0, flag = 0;
    for (int i = 0; i <= n; i++)
    {
        if (s == t)
        {
            cout << i << endl;
            flag = 1;
            break;
        }
        s = a[s];
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }
    return 0;
}