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
        int a[n];
        vector<int> odd;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
            {
                odd.push_back(i + 1);
            }
        }
        int sz = odd.size();
        if (sz % 2 != k % 2)
        {
            cout << "NO" << endl;
        }
        else if (sz < k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; i++)
            {
                cout << odd[i] << " ";
            }
            cout << n << endl;
        }
        t--;
    }

    return 0;
}