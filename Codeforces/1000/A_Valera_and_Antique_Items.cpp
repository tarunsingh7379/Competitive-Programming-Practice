#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, money;
    cin >> n >> money;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vector<int> z;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            z.push_back(x);
        }
        sort(z.begin(), z.end());
        if (z[0] < money)
        {
            ans.push_back(i + 1);
        }
    }
    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}