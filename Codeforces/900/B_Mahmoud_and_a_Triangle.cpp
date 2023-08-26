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
    int flag = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] + a[i] > a[i + 1])
        {
            flag = 1;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}