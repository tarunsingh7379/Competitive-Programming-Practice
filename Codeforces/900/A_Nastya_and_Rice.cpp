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
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int mi = (a - b) * n, ma = (a + b) * n;
        if (mi > (c + d) || ma < (c - d))
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }

        t--;
    }

    return 0;
}