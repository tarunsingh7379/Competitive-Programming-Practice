#include <bits/stdc++.h>
typedef long long int ll;
#define M 1073741824
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> d(1000001, 0);
    for (int i = 1; i <= 1000000; i++)
    {
        for (int j = i; j <= 1000000; j += i)
        {
            d[j]++;
        }
    }

    int a, b, c;
    cin >> a >> b >> c;
    ll ans = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                ans = (ans + d[i * j * k]) % M;
            }
        }
    }
    cout << ans << endl;
    return 0;
}