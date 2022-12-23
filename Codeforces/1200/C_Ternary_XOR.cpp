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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string a = "", b = "";
        int i = 0;
        while (i < n && (s[i] == '2' || s[i] == '0'))
        {
            if (s[i] == '2')
            {
                a.push_back('1');
                b.push_back('1');
            }
            else
            {
                a.push_back('0');
                b.push_back('0');
            }
            i++;
        }
        if (i < n)
        {
            a.push_back('1');
            b.push_back('0');
            i++;
        }
        while (i < n)
        {
            a.push_back('0');
            b.push_back(s[i]);
            i++;
        }
        cout << a << endl;
        cout << b << endl;
        t--;
    }

    return 0;
}