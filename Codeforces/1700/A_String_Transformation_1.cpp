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
        string a, b;
        cin >> a >> b;

        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int ans = 0;
            for (char c = 'a'; c <= 't'; c++)
            {
                vector<int> pos;
                char x = 't';
                for (int i = 0; i < n; i++)
                {
                    if (a[i] != b[i] && a[i] == c)
                    {
                        pos.push_back(i);
                        x = min(x, b[i]);
                    }
                }
                for (auto num : pos)
                {
                    a[num] = x;
                }
                if (pos.size() > 0)
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }

        t--;
    }

    return 0;
}