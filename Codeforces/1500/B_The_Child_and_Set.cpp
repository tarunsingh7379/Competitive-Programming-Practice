#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sum, limit;
    cin >> sum >> limit;

    vector<pair<int, int>> v;
    for (int i = 1; i <= limit; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (i & (1 << j))
            {
                v.push_back({(1 << j), i});
                break;
            }
        }
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<int> ans;
    for (auto num : v)
    {
        if (sum >= num.first)
        {
            sum -= num.first;
            ans.push_back(num.second);
        }
    }
    if (sum == 0)
    {
        cout << ans.size() << endl;
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

    return 0;
}