#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, string> mp;
    mp['2'] = "2";
    mp['3'] = "3";
    mp['4'] = "322";
    mp['5'] = "5";
    mp['6'] = "53";
    mp['7'] = "7";
    mp['8'] = "7222";
    mp['9'] = "7332";
    string ans = "";
    for (auto c : s)
    {
        ans = ans + mp[c];
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}