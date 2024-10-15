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
        map<int, int> mp;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            vector<int> temp;
            for (int j = 0; j < k; j++)
            {
                int x;
                cin >> x;
                temp.push_back(x);
                mp[x]++;
            }
            v.push_back(temp);
        }
        ll flag = 1;
        for (auto num : v)
        {
            flag = 1;
            for (auto x : num)
            {
                if (mp[x] == 1)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                cout << "Yes" << endl;
                break;
            }
        }
        if (!flag)
        {
            cout << "No" << endl;
        }
        t--;
    }

    return 0;
}