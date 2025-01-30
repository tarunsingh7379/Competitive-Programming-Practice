#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(string s, char r, char b)
{
    int n = s.size();
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] != r)
        {
            cnt1++;
        }
    }
    for (int i = 1; i < n; i += 2)
    {
        if (s[i] != b)
        {
            cnt2++;
        }
    }
    return max(cnt1, cnt2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = n;
    ans = min(ans, func(s, 'r', 'b'));
    ans = min(ans, func(s, 'b', 'r'));
    cout << ans << endl;

    return 0;
}