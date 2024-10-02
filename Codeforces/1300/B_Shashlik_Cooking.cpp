#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_possible(int ind, int n, int k)
{
    int i = ind;
    while ((n - 1) - i > k)
    {
        i += (2 * k + 1);
        if (i > n - 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i <= k; i++)
    {
        if (is_possible(i, n, k))
        {
            vector<int> ans;
            for (int j = i; j < n; j += (2 * k + 1))
            {
                ans.push_back(j + 1);
            }
            cout << ans.size() << endl;
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
            return 0;
        }
    }
    return 0;
}