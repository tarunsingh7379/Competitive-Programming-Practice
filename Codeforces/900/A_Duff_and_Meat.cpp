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
    int price = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        price = min(price, b);
        ans = ans + a * price;
    }
    cout << ans << endl;
    return 0;
}