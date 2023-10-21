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
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();
        if (a[0] == b[0])
        {
            cout << "YES" << endl;
            cout << a[0] << "*" << endl;
        }
        else if (a[n - 1] == b[m - 1])
        {
            cout << "YES" << endl;
            cout << "*" << a[n - 1] << endl;
        }
        else
        {
            int flag = 0;
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    if (a[i] == b[j] && a[i + 1] == b[j + 1])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    cout << "YES" << endl;
                    cout << "*" << a[i] << a[i + 1] << "*" << endl;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}