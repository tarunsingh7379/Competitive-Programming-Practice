#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int ans = a;
    while (a >= b)
    {
        ans = ans + a / b;
        a = a / b + a % b;
    }
    cout << ans << endl;

    return 0;
}