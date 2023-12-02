#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v(1005, 0);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        for (int j = a; j <= b; j++)
        {
            v[j]++;
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i <= 1000; i++)
    {
        if (v[i] == n)
        {
            ans = min(ans, abs(i - k));
        }
    }
    if (ans == INT_MAX)
    {
        ans = -1;
    }
    cout << ans << endl;
    return 0;
}