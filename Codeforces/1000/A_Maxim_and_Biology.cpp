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
    string s;
    cin >> s;
    int ans = INT_MAX;
    for (int i = 0; i + 3 < n; i++)
    {
        int cost = 0;
        cost = cost + min({abs(s[i] - 'A'), ('Z' - s[i]) + ('A' - 'A' + 1), (s[i] - 'A') + ('Z' - 'A' + 1)});
        cost = cost + min({abs(s[i + 1] - 'C'), ('Z' - s[i + 1]) + ('C' - 'A' + 1), (s[i + 1] - 'A') + ('Z' - 'C' + 1)});
        cost = cost + min({abs(s[i + 2] - 'T'), ('Z' - s[i + 2]) + ('T' - 'A' + 1), (s[i + 2] - 'A') + ('Z' - 'T' + 1)});
        cost = cost + min({abs(s[i + 3] - 'G'), ('Z' - s[i + 3]) + ('G' - 'A' + 1), (s[i + 3] - 'A') + ('Z' - 'G' + 1)});
        ans = min(ans, cost);
    }
    cout << ans << endl;

    return 0;
}