#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int get_ans(int x, int y)
{
    return min(x + y, x * y);
}

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
        string s;
        cin >> s;
        if (n <= 2)
        {
            cout << stoi(s) << endl;
        }
        else
        {
            int ans = 1e8;
            for (int i = 1; i < n; i++)
            {
                int last = -1;
                if (i != 1)
                {
                    last = s[0] - '0';
                }
                for (int j = 1; j < i - 1; j++)
                {
                    last = get_ans(s[j] - '0', last);
                }
                int z = stoi(s.substr(i - 1, 2));
                if (last != -1)
                {
                    last = get_ans(z, last);
                }
                else
                {
                    last = z;
                }
                for (int j = i + 1; j < n; j++)
                {
                    last = get_ans(s[j] - '0', last);
                }
                ans = min(ans, last);
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}