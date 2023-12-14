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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b = a;
        sort(b.begin(), b.end());
        int l = 0, r = n - 1;
        int min_ind = 0, max_ind = n - 1, flag = 0;
        while (l < r)
        {
            if (min_ind >= max_ind)
            {
                break;
            }
            if (a[l] == b[min_ind])
            {
                min_ind++;
                l++;
            }
            else if (a[l] == b[max_ind])
            {
                l++;
                max_ind--;
            }
            else if (a[r] == b[min_ind])
            {
                r--;
                min_ind++;
            }
            else if (a[r] == b[max_ind])
            {
                r--;
                max_ind--;
            }
            else
            {
                cout << l + 1 << " " << r + 1 << endl;
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