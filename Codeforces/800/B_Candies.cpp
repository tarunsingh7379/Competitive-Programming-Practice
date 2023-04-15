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
        if (n % 2 == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> ans;
            int started = 0;
            for (int i = 30; i >= 1; i--)
            {
                if (n & (1 << i))
                {
                    started = 1;
                    ans.push_back(2);
                }
                else
                {
                    if (started)
                    {
                        ans.push_back(1);
                    }
                }
            }
            cout << ans.size() << endl;
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}