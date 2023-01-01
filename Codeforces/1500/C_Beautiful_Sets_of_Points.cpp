#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        swap(n, m);
    }

    cout << n + 1 << endl;

    for (int i = 0; i <= n; i++)
    {
        cout << i << " " << n - i << endl;
    }

    return 0;
}