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
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        vector<int> freq1(26, 0), freq2(26, 0);
        for (auto c : a)
        {
            freq1[c - 'a']++;
        }
        for (auto c : b)
        {
            freq2[c - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (freq2[i] > 0)
            {
                if (freq1[i] >= freq2[i])
                {
                    freq1[i] -= freq2[i];
                    freq2[i] = 0;
                }
                else
                {
                    freq2[i] -= freq1[i];
                    freq1[i] = 0;
                }
            }
        }
        for (int i = 0; i < 26; i++)
        {
            while (freq2[i] > 0)
            {
                int cnt = 0;
                for (int j = i - 1; j >= 0; j--)
                {
                    if (freq1[j] >= k)
                    {
                        freq1[j + 1] += k;
                        freq1[j] -= k;
                        cnt++;
                        if (freq1[i] > 0)
                        {
                            if (freq2[i] >= freq1[i])
                            {
                                freq2[i] -= freq1[i];
                                freq1[i] = 0;
                            }
                            else
                            {
                                freq1[i] -= freq2[i];
                                freq2[i] = 0;
                            }
                        }
                        break;
                    }
                }
                if (cnt == 0)
                    break;
            }
        }
        int flag = 1;
        for (auto num : freq2)
        {
            if (num != 0)
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
        t--;
    }

    return 0;
}