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
    int ans = 0;
    char last = 'a';
    for (auto &c : s)
    {
        int d = abs(c - last);
        int cost = min(d, 26 - d);
        ans += cost;
        last = c;
    }
    cout << ans << endl;

    return 0;
}