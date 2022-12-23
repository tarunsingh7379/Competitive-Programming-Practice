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
        if (n % 2 != 0)
        {
            cout << "Mike" << endl;
        }
        else
        {
            int mi = a[0], pos = 0;
            for (int i = 1; i < n; i++)
            {
                if (a[i] < mi)
                {
                    mi = a[i];
                    pos = i;
                }
            }
            if (pos % 2 != 0)
            {
                cout << "Mike" << endl;
            }
            else
            {
                cout << "Joe" << endl;
            }
        }
        t--;
    }

    return 0;
}