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
        int a[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i][0]]++;
        }
        int other = 0;
        for (auto num : mp)
        {
            if (num.second == 1)
            {
                other = num.first;
            }
            else
            {
                ans.push_back(num.first);
            }
        }
        for (int j = 1; j < n - 1; j++)
        {
            ans.push_back(other);
            for (int i = 0; i < n; i++)
            {
                if (other != a[i][j])
                {
                    other = a[i][j];
                    break;
                }
            }
        }
        ans.push_back(other);
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}