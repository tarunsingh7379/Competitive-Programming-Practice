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
        int flag = 0;
        int cur = 0, idx = 0, val = 0;
        while (abs(cur) <= n)
        {
            flag ^= 1;
            if (flag)
            {
                val = -2 * idx - 1;
            }
            else
            {
                val = 2 * idx - 1;
            }
            cur += val;
        }
        cout << (flag ? "Sakurako" : "Kosuke") << "\n";
        t--;
    }

    return 0;
}