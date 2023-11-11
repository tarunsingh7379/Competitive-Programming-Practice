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
    map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    cout << min({mp['B'], mp['u'] / 2, mp['l'], mp['b'], mp['a'] / 2, mp['s'], mp['r']}) << endl;

    return 0;
}