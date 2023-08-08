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
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    cout << b[0] << " ";
    int ma = b[0];
    for (int i = 1; i < n; i++)
    {
        cout << b[i] + ma << " ";
        ma = max(ma, b[i] + ma);
    }

    return 0;
}