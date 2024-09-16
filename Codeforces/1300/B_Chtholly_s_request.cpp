#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll ans = 0;

    vector<ll> v;
    for (int i = 1; i <= 100000; i++)
    {
        string s = to_string(i);
        string temp = "";
        for (int j = 0; j < s.size(); j++)
        {
            temp.push_back(s[j]);
        }
        for (int j = s.size() - 1; j >= 0; j--)
        {
            temp.push_back(s[j]);
        }
        v.push_back(stoll(temp));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        ans = (ans + v[i]) % k;
    }
    cout << ans << endl;

    return 0;
}