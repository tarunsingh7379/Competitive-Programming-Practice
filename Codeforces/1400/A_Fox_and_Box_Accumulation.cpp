#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0, ans = 0;
    vector<int> used(n, 0);
    while (cnt < n)
    {
        ans++;
        int height = 0;
        for (int i = 0; i < n; i++)
        {
            if (!used[i])
            {
                if (a[i] >= height)
                {
                    used[i] = 1;
                    height++;
                    cnt++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}