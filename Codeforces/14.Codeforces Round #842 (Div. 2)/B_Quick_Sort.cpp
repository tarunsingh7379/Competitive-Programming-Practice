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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> sorted = a;
        sort(sorted.begin(), sorted.end());
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == sorted[j])
            {
                j++;
            }
        }
        int rem = n - j;
        int ans = (rem + k - 1) / k;
        cout << ans << endl;
        t--;
    }

    return 0;
}