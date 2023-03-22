#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans = ans + a[s[i] - '0' - 1];
    }
    cout << ans << endl;

    return 0;
}