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
        string a;
        cin >> a;
        int m;
        cin >> m;
        string b, c;
        cin >> b >> c;
        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'V')
            {
                a = b[i] + a;
            }
            else
            {
                a = a + b[i];
            }
        }
        cout << a << endl;
        t--;
    }

    return 0;
}