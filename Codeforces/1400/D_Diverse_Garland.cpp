#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

/*
GRBRG
GRBRBG
*/

char get_char(char x, char y)
{
    if (y == '#')
    {
        if (x == 'R')
            return 'G';
        return 'R';
    }
    if (x == 'R')
    {
        if (y == 'G')
            return 'B';
        return 'G';
    }
    else if (x == 'G')
    {
        if (y == 'R')
            return 'B';
        return 'R';
    }
    else
    {
        if (y == 'G')
            return 'R';
        return 'G';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = "RGB";
    int l = 0;
    int ans = 0;
    for (int r = 1; r < n; r++)
    {
        if (s[r] != s[l])
        {
            int len = r - l;
            if (len > 1)
            {
                char c = get_char(s[l], s[r]);
                if (len & 1)
                {
                    for (int j = r - 2; j >= l; j -= 2)
                    {
                        s[j] = c;
                        ans++;
                    }
                }
                else
                {
                    for (int j = r - 1; j >= l; j -= 2)
                    {
                        s[j] = c;
                        ans++;
                    }
                }
            }
            l = r;
        }
    }
    int len = s.size() - l;
    if (len > 1)
    {
        char c = get_char(s[l], '#');
        for (int j = l + 1; j < s.size(); j += 2)
        {
            s[j] = c;
            ans++;
        }
    }
    cout << ans << endl;
    cout << s << endl;
    return 0;
}