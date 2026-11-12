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
        int a, b;
        cin >> a >> b;
        if (b <= a && a % b == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        t--;
    }

    return 0;
}