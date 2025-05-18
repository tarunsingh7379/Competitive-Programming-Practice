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
        if (n % 2 == 0)
        {
            vector<int> freq1(26, 0), freq2(26, 0);
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    freq1[s[i] - 'a']++;
                }
                else
                {
                    freq2[s[i] - 'a']++;
                }
            }
            int ma1 = 0, ma2 = 0;
            for (int i = 0; i < 26; i++)
            {
                ma1 = max(ma1, freq1[i]);
                ma2 = max(ma2, freq2[i]);
            }
            int ans = n - (ma1 + ma2);
            cout << ans << endl;
        }
        else
        {
            vector<vector<int>> prefix_freq1(n, vector<int>(26, 0)), prefix_freq2(n, vector<int>(26, 0));
            vector<vector<int>> suffix_freq1(n, vector<int>(26, 0)), suffix_freq2(n, vector<int>(26, 0));
            prefix_freq1[0][s[0] - 'a']++;
            for (int i = 1; i < n; i++)
            {
                prefix_freq1[i] = prefix_freq1[i - 1];
                prefix_freq2[i] = prefix_freq2[i - 1];
                if (i % 2 == 0)
                {
                    prefix_freq1[i][s[i] - 'a']++;
                }
                else
                {
                    prefix_freq2[i][s[i] - 'a']++;
                }
            }
            suffix_freq1[n - 1][s[n - 1] - 'a']++;
            for (int i = n - 2; i >= 0; i--)
            {
                suffix_freq1[i] = suffix_freq1[i + 1];
                suffix_freq2[i] = suffix_freq2[i + 1];
                if (i % 2 == 0)
                {
                    suffix_freq1[i][s[i] - 'a']++;
                }
                else
                {
                    suffix_freq2[i][s[i] - 'a']++;
                }
            }
            int ans = n;
            for (int i = 0; i < n; i++)
            {
                int ma1 = 0, ma2 = 0;
                for (int j = 0; j < 26; j++)
                {
                    int cnt1 = 0, cnt2 = 0;
                    if (i - 1 >= 0)
                    {
                        cnt1 += prefix_freq1[i - 1][j];
                        cnt2 += prefix_freq2[i - 1][j];
                    }
                    if (i + 1 < n)
                    {
                        cnt1 += suffix_freq2[i + 1][j];
                        cnt2 += suffix_freq1[i + 1][j];
                    }
                    ma1 = max(ma1, cnt1);
                    ma2 = max(ma2, cnt2);
                }
                ans = min(ans, n - (ma1 + ma2));
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}