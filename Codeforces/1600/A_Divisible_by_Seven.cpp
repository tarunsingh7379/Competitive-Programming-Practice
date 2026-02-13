#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<ll> freq(10, 0);
    for (auto c : s)
    {
        freq[c - '0']++;
    }
    freq[1]--;
    freq[6]--;
    freq[8]--;
    freq[9]--;
    string p = "1689";
    vector<ll> perm(7, 0);
    do
    {
        ll x = stoll(p);
        perm[x % 7] = x;
    } while (next_permutation(p.begin(), p.end()));

    string ans = "";
    ll rem = 0;
    for (ll i = 1; i <= 9; i++)
    {
        for (ll j = 0; j < freq[i]; j++)
        {
            ans.push_back(i + '0');
            rem = (rem * 10 + i) % 7;
        }
    }
    rem = (rem * 4) % 7;
    ans += to_string(perm[(7 - rem) % 7]);
    for (ll i = 0; i < freq[0]; i++)
    {
        ans.push_back('0');
    }
    cout << ans << endl;

    return 0;
}