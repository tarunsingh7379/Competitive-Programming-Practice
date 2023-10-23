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
        int last_day[50005];
        vector<vector<int>> a(n);
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                int x;
                cin >> x;
                a[i].push_back(x);
                last_day[x] = i;
            }
        }

        vector<int> ans;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            flag = 0;
            for (auto num : a[i])
            {
                if (last_day[num] == i)
                {
                    ans.push_back(num);
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}