#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

vector<pair<int, int>> func(int n, int x, vector<int> &a)
{
    map<int, int> mp;
    for (auto num : a)
    {
        mp[num]++;
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        auto it = mp.rbegin();
        int req = x - it->first;
        if (mp[req] > 0)
        {
            if (req != it->first)
            {
                ans.push_back({it->first, req});
                x = max(it->first, req);
                mp[it->first]--;
                if (mp[it->first] == 0)
                {
                    mp.erase(it->first);
                }
                mp[req]--;
                if (mp[req] == 0)
                {
                    mp.erase(req);
                }
            }
            else
            {
                if (mp[req] > 1)
                {
                    ans.push_back({req, req});
                    x = req;
                    mp[req] -= 2;
                    if (mp[req] == 0)
                    {
                        mp.erase(req);
                    }
                }
                else
                {
                    vector<pair<int, int>> temp;
                    return temp;
                }
            }
        }
        else
        {
            vector<pair<int, int>> temp;
            return temp;
        }
    }
    return ans;
}

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
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int flag = 0;
        for (int i = 0; i < 2 * n - 1; i++)
        {
            int x = a[i] + a.back();
            vector<pair<int, int>> ans = func(n, x, a);
            if (ans.size() > 0)
            {
                cout << "YES" << endl;
                cout << x << endl;
                for (auto num : ans)
                {
                    cout << num.first << " " << num.second << endl;
                }
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}