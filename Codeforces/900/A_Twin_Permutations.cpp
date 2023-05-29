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
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            ans[i] = abs(n + 1 - a[i]);
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