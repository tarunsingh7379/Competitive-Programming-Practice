#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

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
        string x;
        int n = s.size();
        for (int i = 0; i < min(n, 5); i++)
        {
            x += s[i];
        }
        ll l = 0, r = 4;
        while (r < (n - 1))
        {
            if (x == "party")
            {
                s[l + 2] = 'w';
                s[l + 3] = 'r';
                s[l + 4] = 'i';
            }
            x.erase(x.begin());
            l++;
            r++;
            x += s[r];
        }
        if (x == "party")
        {
            s[l + 2] = 'w';
            s[l + 3] = 'r';
            s[l + 4] = 'i';
        }
        cout << s << endl;
        t--;
    }

    return 0;
}