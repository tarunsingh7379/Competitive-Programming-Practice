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
    int ans = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (j - 3 >= i && s[j - 3] == 'b' && s[j - 2] == 'e' && s[j - 1] == 'a' && s[j] == 'r')
            {
                ans = ans + (n - j);
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}