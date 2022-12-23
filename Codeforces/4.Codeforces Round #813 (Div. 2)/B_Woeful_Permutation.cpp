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
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(i + 1);
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                swap(ans[i], ans[i + 1]);
            }
        }
        else
        {
            for (int i = 1; i < n; i += 2)
            {
                swap(ans[i], ans[i + 1]);
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