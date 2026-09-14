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
        int n = s.size();
        if (n <= 2 || s == "101" || s[0] != '1' || s[1] != '0')
        {
            cout << "NO" << endl;
        }
        else
        {
            bool imp = false;
            string x = "123456789";
            for (auto c : x)
            {
                if (s[2] == c)
                {
                    imp = true;
                    break;
                }
            }
            cout << (imp ? "YES" : "NO") << endl;
        }
        t--;
    }

    return 0;
}