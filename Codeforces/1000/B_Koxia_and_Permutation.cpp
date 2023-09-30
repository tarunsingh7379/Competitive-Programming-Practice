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
        int n, k;
        cin >> n >> k;
        int x = n, y = 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << x << " ";
                x--;
            }
            else
            {
                cout << y << " ";
                y++;
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}