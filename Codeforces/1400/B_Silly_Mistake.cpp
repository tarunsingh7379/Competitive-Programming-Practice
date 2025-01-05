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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans;
    map<int, int> mp;
    map<int, int> freq;
    int flag = 1;
    if (a[0] > 0)
    {
        mp[a[0]]++;
        int last = 0;
        freq[a[0]]++;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > 0)
            {
                if (mp[a[i]])
                {
                    flag = 0;
                    break;
                }
                mp[a[i]]++;
                if (freq[a[i]])
                {
                    flag = 0;
                    break;
                }
                freq[a[i]]++;
            }
            else
            {
                if (freq[a[i]])
                {
                    flag = 0;
                    break;
                }
                freq[a[i]]++;
                a[i] = -a[i];
                if (mp[a[i]])
                {
                    mp[a[i]]--;
                    mp.erase(a[i]);
                    if (mp.empty())
                    {
                        ans.push_back(i - last + 1);
                        last = i + 1;
                        while (!freq.empty())
                        {
                            freq.erase(freq.begin());
                        }
                    }
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    else
    {
        flag = 0;
    }

    if (flag == 0 || !mp.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans.size() << endl;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}