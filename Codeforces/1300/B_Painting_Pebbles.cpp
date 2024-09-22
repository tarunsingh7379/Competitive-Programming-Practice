#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int a[n];
    int mi = INT_MAX, ma = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mi = min(mi, a[i]);
        ma = max(ma, a[i]);
    }
    int req = ma - mi;
    if (k < req)
    {
        cout << "NO" << endl;
    }
    else
    {
        vector<vector<int>> ans(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < mi; j++)
            {
                ans[i].push_back(1);
            }
            a[i] -= mi;
            if (a[i])
            {
                ans[i].push_back(1);
                a[i]--;
            }
        }
        int used = 1, cnt = 0;
        while (1)
        {
            cnt = 0;
            used++;
            for (int i = 0; i < n; i++)
            {
                if (a[i])
                {
                    cnt++;
                    a[i]--;
                    ans[i].push_back(used);
                }
            }
            if (cnt == 0)
            {
                break;
            }
        }
        cout << "YES" << endl;
        for (auto num : ans)
        {
            for (auto x : num)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}