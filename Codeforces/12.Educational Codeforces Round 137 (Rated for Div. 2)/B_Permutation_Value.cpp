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
        cout << 1 << " " << n << " ";
        for (int i = 2; i < n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}