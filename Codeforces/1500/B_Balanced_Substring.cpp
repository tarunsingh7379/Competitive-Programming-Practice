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

    int ans = 0;
    map<int, int> mp;
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }
        int bal = cnt0 - cnt1;
        if (bal == 0)
        {
            ans = max(ans, i + 1);
        }
        if (mp.find(bal) != mp.end())
        {
            ans = max(ans, i - mp[bal]);
        }
        else
        {
            mp[bal] = i;
        }
    }
    cout << ans << endl;

    return 0;
}