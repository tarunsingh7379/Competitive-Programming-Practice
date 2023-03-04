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
    int mi = min(a, b);
    int rem = max(a, b) - mi;
    cout << mi << " " << rem / 2 << endl;

    return 0;
}