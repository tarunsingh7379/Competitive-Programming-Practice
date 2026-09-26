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
        bool ok = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[0])
            {
                swap(s[i], s[0]);
                ok = true;
                break;
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}