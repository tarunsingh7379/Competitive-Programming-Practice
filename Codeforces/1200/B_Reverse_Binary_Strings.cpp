#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(string s)
{
    int cnt = 0;
    for (int i = 0; i < (s.size() - 1); i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
    }
    cnt = cnt / 2;
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = min(func("1" + s + "0"), func("0" + s + "1"));
        cout << ans << endl;

        t--;
    }

    return 0;
}