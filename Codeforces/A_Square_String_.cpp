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
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            string s1, s2;
            for (ll i = 0; i < n / 2; i++)
            {
                s1.push_back(s[i]);
            }
            for (ll i = n / 2; i < n; i++)
            {
                s2.push_back(s[i]);
            }
            if (s1 == s2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}