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
    int ans = 0, cnt = 0;
    for (auto c : s)
    {
        if (c == 'x')
        {
            cnt++;
        }
        else
        {
            ans += max(0, cnt - 2);
            cnt = 0;
        }
    }
    ans += max(0, cnt - 2);
    cout << ans << endl;

    return 0;
}