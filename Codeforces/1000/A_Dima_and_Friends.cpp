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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    int ans = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (((sum + i) % (n + 1)) != 1)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}