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
        int n, x, y;
        cin >> n >> x >> y;
        if (x > y)
        {
            swap(x, y);
        }
        x--;
        y--;
        vector<int> ans(n, 0);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ans[(x + i) % n] = cnt;
            cnt = (cnt + 1) % 2;
        }
        if (n % 2 != 0 || (x - y) % 2 == 0)
        {
            ans[x] = 2;
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