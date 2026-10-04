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
        int x, n;
        cin >> x >> n;
        if (n & 1)
        {
            cout << x << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        t--;
    }

    return 0;
}