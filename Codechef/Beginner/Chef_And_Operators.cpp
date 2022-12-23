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
        ll a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << "<" << endl;
        }
        else if (a == b)
        {
            cout << "=" << endl;
        }
        else
        {
            cout << ">" << endl;
        }
        t--;
    }

    return 0;
}