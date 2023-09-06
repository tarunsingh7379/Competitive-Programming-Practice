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
        int k, n;
        cin >> k >> n;
        vector<int> ans;
        int x = 1;
        ans.push_back(1);
        while (ans.size() < k)
        {
            int ma = ans.back() + x + k - ans.size() - 1;
            if (ma <= n)
            {
                ans.push_back(ans.back() + x);
                x++;
            }
            else
            {
                ans.push_back(ans.back() + 1);
            }
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}