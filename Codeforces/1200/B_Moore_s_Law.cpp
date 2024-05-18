#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n, t;
    cin >> n >> t;
    double ans = n * pow(1.000000011, t);
    cout << fixed << setprecision(12);
    cout << ans << endl;

    return 0;
}