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
        ll n, m;
        cin >> n >> m;
        ll moves = m + n - 2;
        if (moves % 2 != 0)
        {
            cout << "Burenka" << endl;
        }
        else
        {
            cout << "Tonya" << endl;
        }
        t--;
    }

    return 0;
}