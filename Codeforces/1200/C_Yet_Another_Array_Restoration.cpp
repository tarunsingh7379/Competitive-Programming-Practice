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
        int d = y - x;
        vector<int> ans;
        for (int i = 1; i <= d; i++)
        {
            if (d % i == 0)
            {
                int target = x;
                while (target != y)
                {
                    ans.push_back(target);
                    target = target + i;
                }
                ans.push_back(target);
                if (ans.size() == n)
                {
                    break;
                }
                else if (ans.size() < n)
                {
                    target = x - i;
                    while (target > 0 && ans.size() != n)
                    {
                        ans.push_back(target);
                        target = target - i;
                    }
                    if (ans.size() == n)
                    {
                        break;
                    }
                    else if (ans.size() < n)
                    {
                        target = y + i;
                        while (ans.size() != n)
                        {
                            ans.push_back(target);
                            target = target + i;
                        }
                        break;
                    }
                }
                else
                {
                    ans.clear();
                }
            }
        }
        sort(ans.begin(), ans.end());
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;

        t--;
    }

    return 0;
}