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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt += x;
        }
        cnt = abs(cnt);
        if (cnt % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if ((cnt / 2) & 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        t--;
    }

    return 0;
}