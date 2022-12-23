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
        int prev = 1;
        int ans = 0;
        int i = 1;
        while (i < n)
        {
            int sum = 0;
            while (prev && i < n)
            {
                int cnt = 1;
                while (i < n - 1 && a[i] < a[i + 1])
                {
                    i++;
                    cnt++;
                }
                sum += cnt;
                prev--;
                i++;
            }
            prev = sum;
            ans++;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}