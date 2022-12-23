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
        int mi = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mi = min(mi, a[i]);
        }
        vector<int> v;
        vector<int> ind;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % mi == 0)
            {
                v.push_back(a[i]);
                ind.push_back(i);
            }
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < ind.size(); i++)
        {
            a[ind[i]] = v[i];
        }
        if (is_sorted(a, a + n))
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