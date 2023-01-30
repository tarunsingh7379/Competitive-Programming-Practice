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
        int n, s, r;
        cin >> n >> s >> r;
        vector<int> ans;
        int x = r / (n - 1);
        int y = r % (n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            ans.push_back(x);
        }
        for (int i = 0; i < y; i++)
        {
            ans[i]++;
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << (s - r) << endl;
        t--;
    }

    return 0;
}