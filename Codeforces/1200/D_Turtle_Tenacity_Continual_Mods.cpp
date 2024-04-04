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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (a[0] != a[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            int flag = 0;
            for (int i = 1; i < n; i++)
            {
                if (a[i] % a[0] != 0)
                {
                    flag = 1;
                    break;
                }
            }
            cout << (flag ? "YES" : "NO") << endl;
        }
        t--;
    }

    return 0;
}