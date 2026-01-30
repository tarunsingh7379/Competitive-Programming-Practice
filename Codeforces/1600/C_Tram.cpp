#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll s, x1, x2;
    cin >> s >> x1 >> x2;
    ll t1, t2;
    cin >> t1 >> t2;
    ll p, d;
    cin >> p >> d;
    ll ans1 = abs(x2 - x1) * t2;

    ll time_to_x1;
    ll dir_at_x1 = d;

    if ((d == 1 && p <= x1) || (d == -1 && p >= x1))
    {
        time_to_x1 = abs(p - x1) * t1;
    }
    else
    {
        if (d == 1)
        {
            time_to_x1 = (s - p + s - x1) * t1;
            dir_at_x1 = -1;
        }
        else
        {
            time_to_x1 = (p + x1) * t1;
            dir_at_x1 = 1;
        }
    }

    ll time_x1_to_x2;
    if ((dir_at_x1 == 1 && x2 >= x1) ||
        (dir_at_x1 == -1 && x2 <= x1))
    {
        time_x1_to_x2 = abs(x2 - x1) * t1;
    }
    else
    {
        if (dir_at_x1 == 1)
        {
            time_x1_to_x2 = (s - x1 + s - x2) * t1;
        }
        else
        {
            time_x1_to_x2 = (x1 + x2) * t1;
        }
    }

    ll ans2 = time_to_x1 + time_x1_to_x2;

    cout << min(ans1, ans2) << endl;
    return 0;
}