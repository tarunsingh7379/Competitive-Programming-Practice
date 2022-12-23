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
    string s;
    cin >> s;
    int ans = 0, l = 0, cost = 0;
    for (int r = 0; r < n; r++)
    {
        if (s[r] == 'a')
        {
            cost++;
        }
        while (cost > k)
        {
            if (s[l] == 'a')
            {
                cost--;
            }
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    l = 0;
    cost = 0;
    for (int r = 0; r < n; r++)
    {
        if (s[r] == 'b')
        {
            cost++;
        }
        while (cost > k)
        {
            if (s[l] == 'b')
            {
                cost--;
            }
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;

    return 0;
}