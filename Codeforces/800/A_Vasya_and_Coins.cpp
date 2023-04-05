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
        if (a == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << a + 2 * b + 1 << endl;
        }
        t--;
    }

    return 0;
}