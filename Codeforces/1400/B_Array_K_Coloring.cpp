#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int a[n];
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    int ok = 1;
    for (auto num : mp)
    {
        if (num.second.size() > k)
        {
            ok = 0;
            break;
        }
    }
    if (!ok || k > n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        vector<int> ans(n, 0);
        map<int, int> freq;
        int ma = 0;
        for (auto num : mp)
        {
            int cur = 1;
            for (auto x : num.second)
            {
                ans[x] = cur++;
                freq[ans[x]]++;
            }
            ma = max(ma, cur);
        }
        int cur = 1;
        if (ma <= k)
        {
            for (auto num : mp)
            {
                for (auto x : num.second)
                {
                    if (freq[ans[x]] > 1)
                    {
                        freq[ans[x]]--;
                        ans[x] = ma++;
                    }
                    if (ma > k)
                    {
                        break;
                    }
                }
                if (ma > k)
                {
                    break;
                }
            }
        }

        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}