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
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << 2 * i << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}