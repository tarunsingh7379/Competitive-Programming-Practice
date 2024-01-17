#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i < (1 << 10); i++)
    {
        string s;
        int x = i;
        while (x)
        {
            s.push_back(x % 2 + '0');
            x /= 2;
        }
        reverse(s.begin(), s.end());
        int y = stoi(s);
        if (y <= n)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}