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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i += 2)
    {
        cout << a[i] << " ";
    }
    for (int i = (n % 2 == 0 ? n - 1 : n - 2); i >= 0; i -= 2)
    {
        cout << a[i] << " ";
    }

    return 0;
}