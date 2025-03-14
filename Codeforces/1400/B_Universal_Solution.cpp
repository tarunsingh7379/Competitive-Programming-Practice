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
        string s;
        cin >> s;
        int n = s.size();
        map<char, int> mp;
        for (auto c : s)
        {
            mp[c]++;
        }
        vector<pair<int, char>> v;
        for (auto num : mp)
        {
            v.push_back({num.second, num.first});
        }
        sort(v.rbegin(), v.rend());

        char ans;
        if (v[0].second == 'R')
        {
            ans = 'P';
        }
        else if (v[0].second == 'S')
        {
            ans = 'R';
        }
        else
        {
            ans = 'S';
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans;
        }
        cout << endl;

        t--;
    }

    return 0;
}