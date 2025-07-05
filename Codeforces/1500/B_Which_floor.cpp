#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> flats(101, 0);
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        flats[x] = y;
        v.push_back(x);
    }
    int ans = -1;
    for (int i = 1; i <= 105; i++)
    {
        bool ok = true;
        for (auto num : v)
        {
            ll floor = (num + i - 1) / i;
            if (flats[num] != floor)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            int x = (n + i - 1) / i;
            if (ans == -1)
            {
                ans = x;
            }
            else if (ans != x)
            {
                ans = -1;
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}