#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

string func(string s)
{
    ll n = s.size();
    if (n % 2 != 0)
    {
        return s;
    }
    string s1 = func(s.substr(0, n / 2));
    string s2 = func(s.substr(n / 2));
    string x = s1 + s2, y = s2 + s1;
    if (x <= y)
    {
        return x;
    }
    return y;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    int n = a.size();
    string x = func(a), y = func(b);
    if (x == y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}