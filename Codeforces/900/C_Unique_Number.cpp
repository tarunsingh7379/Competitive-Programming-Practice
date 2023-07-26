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
        int sum = 0, num = 9;
        vector<int> ans;
        while (sum < n && num > 0)
        {
            ans.push_back(min(n - sum, num));
            sum += num;
            num--;
        }
        if (sum < n)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(ans.begin(), ans.end());
            for (auto num : ans)
            {
                cout << num;
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}