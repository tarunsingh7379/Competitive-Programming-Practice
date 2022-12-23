#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(string &s)
{
    ll balance = 0, max_balance = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            balance++;
        }
        else
        {
            balance--;
        }
        max_balance = max(max_balance, balance);
    }
    return max_balance;
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
        ll x = func(s);
        for (ll i = 0; i < x; i++)
        {
            cout << "(";
        }
        for (ll i = 0; i < x; i++)
        {
            cout << ")";
        }
        cout << endl;
        t--;
    }

    return 0;
}