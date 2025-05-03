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
        vector<int> a(n, -1);
        for (int i = 0; i < n; i++)
        {
            int can_use = n - i;
            if (k >= can_use)
            {
                a[i] = 100;
                k -= can_use;
            }
            else
            {
                a[i] = k;
                if (i + k < n)
                {
                    a[i + k] = -2;
                }
                break;
            }
        }
        for (auto num : a)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}