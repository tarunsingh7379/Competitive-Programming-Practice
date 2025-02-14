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
    string x = "CODEFORCES";
    int n = s.size(), m = x.size();
    int l = 0, r = 0;
    for (int i = 0; i < min(n, m); i++)
    {
        if (s[i] == x[i])
        {
            l++;
        }
        else
        {
            break;
        }
    }
    int ind = m - 1;
    for (int i = n - 1; i >= 0 && ind >= 0; i--)
    {
        if (s[i] == x[ind])
        {
            r++;
        }
        else
        {
            break;
        }
        ind--;
    }
    if (l + r >= m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}