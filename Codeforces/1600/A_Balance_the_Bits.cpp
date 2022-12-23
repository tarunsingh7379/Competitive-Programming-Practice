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
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
        }
        if (cnt % 2)
        {
            cout << "NO" << endl;
        }
        else if (s[0] == '0' || s[n - 1] == '0')
        {
            cout << "NO" << endl;
        }
        else
        {
            string a, b;
            int x = cnt / 2, flag = 1;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    if (x > 0)
                    {
                        a.push_back('(');
                        b.push_back('(');
                        x--;
                    }
                    else
                    {
                        a.push_back(')');
                        b.push_back(')');
                    }
                }
                else
                {
                    if (flag == 1)
                    {
                        a.push_back('(');
                        b.push_back(')');
                    }
                    else
                    {
                        a.push_back(')');
                        b.push_back('(');
                    }
                    flag = flag ^ 1;
                }
            }
            cout << "YES" << endl;
            cout << a << endl;
            cout << b << endl;
        }
        t--;
    }

    return 0;
}