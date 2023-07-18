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
        int n, a, b;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
        {
            cout << (char)('a' + i % b);
        }
        cout << endl;
        t--;
    }

    return 0;
}