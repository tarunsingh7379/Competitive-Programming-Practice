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
        int flag = 0;
        for (int i = 0; i <= n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] > i)
                {
                    cnt++;
                }
            }
            if (cnt == i)
            {
                cout << i << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}