#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int flag = 1;
    if (a < b)
    {
        swap(a, b);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            if (flag)
            {
                if (a > 0)
                {
                    a--;
                    ans++;
                }
            }
            else
            {
                if (b > 0)
                {
                    b--;
                    ans++;
                }
            }
            flag ^= 1;
        }
        else
        {
            if (a < b)
            {
                swap(a, b);
            }
            flag = 1;
        }
    }
    cout << ans << endl;

    return 0;
}