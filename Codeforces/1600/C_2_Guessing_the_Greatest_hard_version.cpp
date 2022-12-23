#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    cout << "? " << 1 << " " << n << endl;
    ll sec;
    cin >> sec;
    if (sec == 1)
    {
        ll l = sec, r = n;
        while (r - l > 1)
        {
            ll mid = (l + r) / 2;
            cout << "? " << sec << " " << mid << endl;
            ll z;
            cin >> z;
            if (z == sec)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout << "! " << r << endl;
    }
    else
    {
        cout << "? " << 1 << " " << sec << endl;
        ll x;
        cin >> x;
        if (x == sec)
        {
            ll l = 1, r = sec;
            while (r - l > 1)
            {
                ll mid = (l + r) / 2;
                cout << "? " << mid << " " << sec << endl;
                ll z;
                cin >> z;
                if (z == sec)
                {
                    l = mid;
                }
                else
                {
                    r = mid;
                }
            }
            cout << "! " << l << endl;
        }
        else
        {
            ll l = sec, r = n;
            while (r - l > 1)
            {
                ll mid = (l + r) / 2;
                cout << "? " << sec << " " << mid << endl;
                ll z;
                cin >> z;
                if (z == sec)
                {
                    r = mid;
                }
                else
                {
                    l = mid;
                }
            }
            cout << "! " << r << endl;
        }
    }

    return 0;
}