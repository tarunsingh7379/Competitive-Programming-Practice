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
        int n, m;
        cin >> n >> m;

        if (n < m)
        {
            cout << "No" << endl;
        }
        else
        {
            int extra = n - m;
            cout << (extra % 2 == 0 ? "Yes" : "No") << endl;
        }

        t--;
    }

    return 0;
}