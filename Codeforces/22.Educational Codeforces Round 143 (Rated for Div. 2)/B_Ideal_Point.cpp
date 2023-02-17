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
        int n, k;
        cin >> n >> k;
        int left = 0, right = 0;
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            if (l == k)
            {
                left = 1;
            }
            if (r == k)
            {
                right = 1;
            }
        }
        if (left == 1 && right == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}