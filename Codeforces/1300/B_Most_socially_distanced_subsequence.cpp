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
        ans.push_back(a[0]);
        for (int i = 1; i < n - 1; i++)
        {
            if ((a[i] > a[i - 1]) != (a[i] < a[i + 1]))
            {
                ans.push_back(a[i]);
            }
        }
        ans.push_back(a[n - 1]);
        cout << ans.size() << endl;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;

        t--;
    }

    return 0;
}