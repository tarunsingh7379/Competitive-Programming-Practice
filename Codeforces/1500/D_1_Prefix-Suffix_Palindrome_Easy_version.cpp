#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int l, int r, string &s)
{
    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        string s;
        cin >> s;
        int n = s.size();
        int len = 0;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            int ind = 0;
            for (int j = n - 1; j > i && ind <= i; j--)
            {
                if (s[ind] != s[j])
                {
                    if (check(ind, i, s))
                    {
                        int new_len = i + 1 + ((n - 1) - (j + 1) + 1);
                        if (new_len > len)
                        {
                            len = new_len;
                            ans = s.substr(0, i + 1) + s.substr(j + 1);
                        }
                    }
                    break;
                }
                ind++;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            int ind = n - 1;
            for (int j = 0; j < i && ind >= i; j++)
            {
                if (s[ind] != s[j])
                {
                    if (check(i, ind, s))
                    {
                        int new_len = j + (n - i);
                        if (new_len > len)
                        {
                            len = new_len;
                            ans = s.substr(0, j) + s.substr(i);
                        }
                    }
                    break;
                }
                ind--;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (check(0, i, s))
            {
                int new_len = i + 1;
                if (new_len > len)
                {
                    len = new_len;
                    ans = s.substr(0, len);
                }
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (check(i, n - 1, s))
            {
                int new_len = n - i;
                if (new_len > len)
                {
                    len = new_len;
                    ans = s.substr(i, len);
                }
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}