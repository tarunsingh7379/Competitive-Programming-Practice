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
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        int ma = 0;
        for (auto c : s)
        {
            mp[c]++;
            ma = max(ma, mp[c]);
        }
        if (2 * ma - n >= 0)
        {
            cout << 2 * ma - n << endl;
        }
        else
        {
            cout << n % 2 << endl;
        }
        t--;
    }

    return 0;
}