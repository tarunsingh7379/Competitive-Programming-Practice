#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_decimal(char &c)
{
    ll d = 0;
    if (c >= '0' && c <= '9')
    {
        d = c - '0';
    }
    else if (c >= 'A' && c <= 'Z')
    {
        d = 10 + (c - 'A');
    }
    else if (c >= 'a' && c <= 'z')
    {
        d = 36 + (c - 'a');
    }
    else if (c == '-')
    {
        d = 62;
    }
    else
    {
        d = 63;
    }
    return d;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    ll ans = 1;
    ll cnt = 0;
    for (auto c : s)
    {
        ll d = get_decimal(c);
        for (int i = 0; i < 6; i++)
        {
            if (!(d & (1 << i)))
            {
                ans = (ans * 3) % M;
            }
        }
    }
    cout << ans << endl;

    return 0;
}