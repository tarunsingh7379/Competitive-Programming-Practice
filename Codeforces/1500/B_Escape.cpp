#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;

    if (vd <= vp)
    {
        cout << 0 << endl;
    }
    else
    {
        double disp = vp * t;
        int ans = 0;
        while (1)
        {
            double time_needed = disp / (vd - vp);
            double new_disp = vp * (t + time_needed);
            if (new_disp >= c)
                break;
            ans++;
            double extra_time = new_disp / vd + f;
            t += time_needed;
            t += extra_time;
            disp = vp * t;
        }
        cout << ans << endl;
    }

    return 0;
}