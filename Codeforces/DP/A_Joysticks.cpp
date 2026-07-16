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
    if (a > b)
    {
        swap(a, b);
    }
    int ans = 0;
    while (a != 0)
    {
        a++;
        if (b >= 2)
        {
            b -= 2;
        }
        else
        {
            break;
        }
        if (a > b)
        {
            swap(a, b);
        }
        ans++;
    }
    cout << ans << endl;

    return 0;
}