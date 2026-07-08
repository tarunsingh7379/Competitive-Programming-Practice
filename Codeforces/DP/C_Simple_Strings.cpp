#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

char get_char(char a, char b, char c)
{
    for (char p = 'a'; p <= 'z'; p++)
    {
        if (p != a && p != b && p != c)
        {
            return p;
        }
    }
}

void helper(int i, int cnt, string &s)
{
    int start = i - cnt;
    char c;
    if (start - 1 >= 0)
    {
        c = get_char(s[start - 1], s[i], s[i - 1]);
    }
    else
    {
        c = get_char(s[i], s[i - 1], ' ');
    }
    for (int j = start + 1; j < i; j += 2)
    {
        s[j] = c;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int cnt = 1, n = s.size();
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {
            if (cnt > 1)
            {
                helper(i, cnt, s);
            }
            cnt = 1;
        }
    }
    if (cnt > 1)
    {
        helper(n, cnt, s);
    }
    cout << s << endl;

    return 0;
}