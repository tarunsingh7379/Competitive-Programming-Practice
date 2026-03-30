#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void build_prefix(vector<int> &prefix, string &s, string t)
{
    int n = s.size();
    int j = 0, m = t.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[j])
        {
            cnt++;
        }
        prefix[i + 1] = cnt;
        j = (j + 1) % m;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> prefix1(n + 1, 0), prefix2(n + 1, 0), prefix3(n + 1, 0);
        build_prefix(prefix1, s, "RGB");
        build_prefix(prefix2, s, "GBR");
        build_prefix(prefix3, s, "BRG");
        int ans = INT_MAX;
        for (int i = k; i <= n; i++)
        {
            ans = min(ans, prefix1[i] - prefix1[i - k]);
            ans = min(ans, prefix2[i] - prefix2[i - k]);
            ans = min(ans, prefix3[i] - prefix3[i - k]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}