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
        int mod_1 = 0, mod = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 3 == 1)
                mod_1++;
            mod = (mod + x % 3) % 3;
        }
        if (mod == 0)
        {
            cout << 0 << endl;
        }
        else if (mod == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            if (mod_1 > 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        t--;
    }

    return 0;
}