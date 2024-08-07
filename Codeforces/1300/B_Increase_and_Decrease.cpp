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
    int sum = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    if (sum % n == 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << n - 1 << endl;
    }

    return 0;
}