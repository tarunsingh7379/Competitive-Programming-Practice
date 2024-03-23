#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(string &s, int k)
{
    for (int i = k; i < s.size(); i++)
    {
        if (s[i] != s[i - k])
        {
            return false;
        }
    }
    return true;
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
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == '.')
        {
            ans[i] = '1';
        }
    }
    if (!check(ans, k))
    {
        cout << ans << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                if (i + k < n)
                {
                    ans[i] = '0';
                    if (!check(ans, k))
                    {
                        cout << ans << endl;
                        return 0;
                    }
                }
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '.')
            {
                if (i - k >= 0)
                {
                    ans[i] = '0';
                    if (!check(ans, k))
                    {
                        cout << ans << endl;
                        return 0;
                    }
                }
            }
        }

        cout << "No" << endl;
    }

    return 0;
}