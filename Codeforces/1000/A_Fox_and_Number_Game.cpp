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
    int a[n];
    int g = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        g = __gcd(g, a[i]);
    }

    int sum = n * g;
    cout << sum << endl;

    return 0;
}