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
        int m;
        cin >> m;
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        partial_sum(a.begin(), a.end(), a.begin());
        partial_sum(b.begin(), b.end(), b.begin());
        cout << max(0, max(0, *max_element(a.begin(), a.end())) + max(0, *max_element(b.begin(), b.end()))) << endl;
        t--;
    }

    return 0;
}