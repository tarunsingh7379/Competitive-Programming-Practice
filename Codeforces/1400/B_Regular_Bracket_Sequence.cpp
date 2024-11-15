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

    int cnt = 0, ans = s.size();
    for (auto c : s)
    {
        if (c == '(')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        if (cnt < 0)
        {
            cnt++;
            ans--;
        }
    }
    ans -= cnt;
    cout << ans << endl;

    return 0;
}