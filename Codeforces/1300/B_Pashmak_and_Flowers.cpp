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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a, a + n);
    if (a[0] == a[n - 1])
    {
        cout << 0 << " " << 1LL * n * (n - 1) / 2 << endl;
    }
    else
    {
        cout << a[n - 1] - a[0] << " " << 1LL * mp[a[0]] * mp[a[n - 1]] << endl;
    }

    return 0;
}