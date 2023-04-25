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
        if (abs(a) == abs(b))
        {
            cout << abs(a) + abs(b) << endl;
        }
        else
        {
            cout << max(abs(a), abs(b)) * 2 - 1 << endl;
        }
        t--;
    }

    return 0;
}