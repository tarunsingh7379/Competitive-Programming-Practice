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
        ll n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        int al = 0, bob = 0;
        for (int i = 0; i < n - 1; i++)
        {
            al = al + a[i];
            bob = bob + b[i];
        }
        if (al < bob)
        {
            cout << "Alice" << endl;
        }
        else if (al == bob)
        {
            cout << "Draw" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
        t--;
    }

    return 0;
}