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
            a[i]--;
        }
        vector<int> used(n, 0);
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (!used[i])
            {
                int j = i;
                vector<int> cur;
                while (!used[j])
                {
                    cur.push_back(j);
                    used[j] = 1;
                    j = a[j];
                }
                for (auto num : cur)
                {
                    ans[num] = cur.size();
                }
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