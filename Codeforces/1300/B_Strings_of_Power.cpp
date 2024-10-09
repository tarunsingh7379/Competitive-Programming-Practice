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
    ll ans = 0;
    vector<int> suffix(n, 0);
    for (int i = n - 1; i - 4 >= 0; i--)
    {
        if (i + 1 < n)
            suffix[i] = suffix[i + 1];
        if (s.substr(i - 4, 5) == "metal")
        {
            suffix[i]++;
        }
    }

    for (int i = 0; i < n - 7; i++)
    {
        if (s.substr(i, 5) == "heavy")
        {
            if (i + 5 < n)
                ans += suffix[i + 5];
        }
    }
    cout << ans << endl;

    return 0;
}