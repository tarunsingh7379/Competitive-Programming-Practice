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
    set<char> st(s.begin(), s.end());
    int k = st.size();

    map<char, int> mp;
    int l = 0;
    int ans = INT_MAX;
    for (int r = 0; r < n; r++)
    {
        mp[s[r]]++;
        while (l <= r && mp.size() == k)
        {
            ans = min(ans, r - l + 1);
            mp[s[l]]--;
            if (mp[s[l]] == 0)
            {
                mp.erase(s[l]);
            }
            l++;
        }
    }
    cout << ans << endl;

    return 0;
}