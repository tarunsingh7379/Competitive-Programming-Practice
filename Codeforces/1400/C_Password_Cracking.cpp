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
        string s = "";
        int ok = 0;
        while (s.size() < n)
        {
            cout << "? " << s << "0" << endl;
            int x;
            cin >> x;
            ok = 0;
            if (x)
            {
                s = s + "0";
                ok = 1;
            }
            else
            {
                cout << "? " << s << "1" << endl;
                int y;
                cin >> y;
                if (y)
                {
                    s = s + "1";
                    ok = 1;
                }
            }
            if (!ok)
            {
                break;
            }
        }
        while (s.size() < n)
        {
            cout << "? 0" << s << endl;
            int x;
            cin >> x;
            if (x)
            {
                s = "0" + s;
            }
            else
            {
                s = "1" + s;
            }
        }
        cout << "! " << s << endl;
        t--;
    }

    return 0;
}