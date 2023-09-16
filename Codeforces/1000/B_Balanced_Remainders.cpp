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
        vector<int> rem(3);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 3 == 0)
            {
                rem[0]++;
            }
            else if (x % 3 == 1)
            {
                rem[1]++;
            }
            else
            {
                rem[2]++;
            }
        }
        int z = n / 3;
        int ans = 0;
        while (min({rem[0], rem[1], rem[2]}) != z)
        {
            for (int i = 0; i < 3; i++)
            {
                if (rem[i] > z)
                {
                    rem[i]--;
                    ans++;
                    rem[(i + 1) % 3]++;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}