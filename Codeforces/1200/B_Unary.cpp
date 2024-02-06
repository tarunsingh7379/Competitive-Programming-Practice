#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000003
using namespace std;

/*
">"  →  1000,
"<"  →  1001,
"+"  →  1010,
"-"  →  1011,
"."  →  1100,
","  →  1101,
"["  →  1110,
"]"  →  1111.
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string str = "";
    map<char, string> mp;
    mp['>'] = "1000";
    mp['<'] = "1001";
    mp['+'] = "1010";
    mp['-'] = "1011";
    mp['.'] = "1100";
    mp[','] = "1101";
    mp['['] = "1110";
    mp[']'] = "1111";
    for (auto c : s)
    {
        str = str + mp[c];
    }
    ll ans = 0, pow = 1;
    reverse(str.begin(), str.end());
    for (ll i = 0; i < str.size(); i++)
    {
        ans = (ans + ((str[i] - '0') * pow) % M) % M;
        pow = (pow * 2) % M;
    }
    cout << ans << endl;
    return 0;
}