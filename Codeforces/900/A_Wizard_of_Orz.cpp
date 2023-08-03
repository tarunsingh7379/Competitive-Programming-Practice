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
        cout << "9";
        int x = 8;
        for (int i = 1; i < n; i++)
        {
            cout << x;
            x++;
            x %= 10;
        }
        cout << endl;
        t--;
    }

    return 0;
}