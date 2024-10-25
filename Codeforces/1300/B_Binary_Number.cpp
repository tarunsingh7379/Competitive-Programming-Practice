#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    int carry = 0;
    int ans = 0;
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            if (carry)
                ans++;
            break;
        }
        if (!carry)
        {
            if (s[i] == '0')
            {
                ans++;
            }
            else
            {
                carry = 1;
                ans += 2;
            }
        }
        else
        {
            if (s[i] == '1')
            {
                ans++;
            }
            else
            {
                ans += 2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}