#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int ind, vector<int> &req, vector<vector<int>> &freq)
{
    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[ind][i] < req[i])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    vector<vector<int>> freq(n, vector<int>(26, 0));
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            for (int j = 0; j < 26; j++)
            {
                freq[i][j] = freq[i - 1][j];
            }
        }
        freq[i][s[i] - 'a']++;
    }
    while (q--)
    {
        string t;
        cin >> t;
        int l = 0, r = n - 1;
        int ans = -1;
        vector<int> req(26, 0);
        for (auto c : t)
        {
            req[c - 'a']++;
        }
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (check(mid, req, freq))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}