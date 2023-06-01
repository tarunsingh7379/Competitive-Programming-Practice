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
        if (n & 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "1 3 ";
            for (int i = 0; i < n - 2; i++)
            {
                cout << "2 ";
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}