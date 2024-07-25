#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, string &s)
{
    int j = 0, i = 0;
    for (i = ind; i < s.size(); i++)
    {
        if (s[j] == s[i])
        {
            j++;
        }
        else
        {
            break;
        }
    }
    if (i == s.size())
    {
        return j;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string ans = s;
    int ma = 0;
    for (int i = 1; i < n; i++)
    {
        int len = func(i, s);
        if (len > ma)
        {
            ma = len;
        }
    }
    for (int i = 2; i <= k; i++)
    {
        ans = ans + s.substr(ma);
    }
    cout << ans << endl;
    return 0;
}