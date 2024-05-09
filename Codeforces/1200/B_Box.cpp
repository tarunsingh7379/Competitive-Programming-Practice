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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans;
        int mi = 1;
        map<int, int> mp;
        mp[a[0]]++;
        ans.push_back(a[0]);
        int flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                mp[a[i]]++;
                ans.push_back(a[i]);
            }
            else
            {
                while (mp[mi])
                {
                    mi++;
                }
                if (mi < a[i])
                {
                    ans.push_back(mi);
                    mp[mi]++;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
        {
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}