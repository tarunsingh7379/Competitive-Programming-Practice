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
        if (n & 1)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> freq(26, 0), char_freq(26, 0);
            int l = 0, r = n - 1;
            while (l < r)
            {
                if (s[l] == s[r])
                {
                    freq[s[l] - 'a']++;
                }
                char_freq[s[l] - 'a']++;
                char_freq[s[r] - 'a']++;
                l++;
                r--;
            }
            int ma = 0, ma_char_freq = 0, cnt = 0;
            for (int i = 0; i < 26; i++)
            {
                ma = max(ma, freq[i]);
                ma_char_freq = max(ma_char_freq, char_freq[i]);
                cnt += freq[i];
            }
            if (ma_char_freq > n / 2)
            {
                cout << -1 << endl;
            }
            else
            {
                int ans = max(ma, (cnt + 1) / 2);
                cout << ans << endl;
            }
        }
        t--;
    }

    return 0;
}