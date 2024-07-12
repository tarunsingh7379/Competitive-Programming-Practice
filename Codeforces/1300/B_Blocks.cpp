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
    int cnt_w = 0, cnt_b = 0;
    for (auto c : s)
    {
        if (c == 'W')
        {
            cnt_w++;
        }
        else
        {
            cnt_b++;
        }
    }
    if (cnt_w % 2 != 0 && cnt_b % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> ans;
        char c = 'W';
        if (cnt_w % 2 != 0)
        {
            c = 'B';
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == c)
            {
                if (s[i + 1] == c)
                {
                    ans.push_back(i);
                    i++;
                }
                else
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (s[j] == c)
                        {
                            for (int k = j - 1; k >= i; k--)
                            {
                                ans.push_back(k);
                            }
                            i = j;
                            break;
                        }
                    }
                }
            }
        }
        cout << ans.size() << endl;
        for (auto num : ans)
        {
            cout << num + 1 << " ";
        }
    }

    return 0;
}