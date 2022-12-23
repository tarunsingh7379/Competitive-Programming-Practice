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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a > 0)
        {
            cout << "0";
            for (int i = 0; i < a; i++)
            {
                cout << "0";
            }
        }
        if (c > 0)
        {
            cout << "1";
            for (int i = 0; i < c; i++)
            {
                cout << "1";
            }
        }
        if (a > 0 && c > 0)
        {
            b--;
            for (int i = 0; i < b; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "0";
                }
                else
                {
                    cout << "1";
                }
            }
        }
        else if (a > 0)
        {
            for (int i = 0; i < b; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
        }
        else if (c > 0)
        {
            for (int i = 0; i < b; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "0";
                }
                else
                {
                    cout << "1";
                }
            }
        }
        else
        {
            cout << "1";
            for (int i = 0; i < b; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "0";
                }
                else
                {
                    cout << "1";
                }
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}