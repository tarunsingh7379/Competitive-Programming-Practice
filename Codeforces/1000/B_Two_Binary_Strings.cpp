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
        int n = a.size();
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == b[i] && a[i] == '0' && a[i + 1] == b[i + 1] && a[i + 1] == '1')
            {
                flag = 1;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}