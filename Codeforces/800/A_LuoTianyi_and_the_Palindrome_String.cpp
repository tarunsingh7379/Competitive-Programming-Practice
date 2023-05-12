#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(string s)
{
    int l = 0, r = s.size() - 1;
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
        if (!check(s.substr(1)))
        {
            cout << s.size() - 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}