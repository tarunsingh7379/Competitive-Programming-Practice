#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(ll ind, string &temp, ll n, string &s, set<string> &st)
{
    if (ind == n)
    {
        ll cnt = 0;
        for (auto c : temp)
        {
            if (c == '4')
            {
                cnt++;
            }
        }
        if (cnt == n / 2)
        {
            ll x = stoll(temp), y = stoll(s);
            if (x >= y)
                st.insert(temp);
        }
        return;
    }
    temp.push_back('4');
    func(ind + 1, temp, n, s, st);
    temp.pop_back();
    temp.push_back('7');
    func(ind + 1, temp, n, s, st);
    temp.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    ll n = s.size();
    if (n % 2)
    {
        n++;
        for (ll i = 0; i < n / 2; i++)
        {
            cout << 4;
        }
        for (ll i = 0; i < n / 2; i++)
        {
            cout << 7;
        }
        cout << endl;
    }
    else
    {
        string temp = "";
        set<string> st;
        func(0, temp, n, s, st);
        temp = "";
        if (st.empty())
        {
            func(0, temp, n + 2, s, st);
        }
        cout << *st.begin() << endl;
    }

    return 0;
}