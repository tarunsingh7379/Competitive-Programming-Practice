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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool first = false, second = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 1)
            {
                if (i % 2 == 0)
                {
                    first = true;
                }
                else
                {
                    second = true;
                }
                break;
            }
        }
        if (!first && !second)
        {
            if (n % 2 == 0)
            {
                cout << "Second" << endl;
            }
            else
            {
                cout << "First" << endl;
            }
        }
        else if (first)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
        t--;
    }

    return 0;
}