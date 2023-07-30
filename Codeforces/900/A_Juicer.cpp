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
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > a)
        {
            continue;
        }
        sum += x;
        if (sum > b)
        {
            ans++;
            sum = 0;
        }
    }

    cout << ans << endl;

    return 0;
}