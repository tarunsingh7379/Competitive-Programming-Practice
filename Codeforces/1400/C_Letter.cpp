#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> lower(n, 0), upper(n, 0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cnt++;
        }
        lower[i] = cnt;
    }
    cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cnt++;
        }
        upper[i] = cnt;
    }
    int ans = 1e6, cost = 0;
    for (int i = 0; i < n; i++)
    {
        cost = 0;
        if (i - 1 >= 0)
        {
            cost += lower[i - 1];
        }
        if (i + 1 < n)
        {
            cost += upper[i + 1];
        }
        ans = min(ans, cost);
    }
    cout << ans << endl;

    return 0;
}