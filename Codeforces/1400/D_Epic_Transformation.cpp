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
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int ma = 0;
        for (auto num : mp)
        {
            ma = max(ma, num.second);
        }
        int m = n - ma;
        if (n & 1)
            cout << max(1, ma - m) << endl;
        else
            cout << max(0, ma - m) << endl;
        t--;
    }

    return 0;
}