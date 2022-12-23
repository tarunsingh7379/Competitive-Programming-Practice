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
        ll c, d, l;
        cin >> c >> d >> l;

        if (l % 4 != 0)
        {
            cout << "no" << endl;
        }
        else
        {
            ll dl = d * 4;
            ll cl = c * 4;
            l = l - dl;
            if (l < 0)
            {
                cout << "no" << endl;
            }
            else
            {
                cl = cl - l;
                if (cl < 0)
                {
                    cout << "no" << endl;
                }
                else if (cl == 0)
                {
                    cout << "yes" << endl;
                }
                else
                {
                    ll ma = (cl + 7) / 8;
                    if (ma <= d)
                    {
                        cout << "yes" << endl;
                    }
                    else
                    {
                        cout << "no" << endl;
                    }
                }
            }
        }

        t--;
    }

    return 0;
}