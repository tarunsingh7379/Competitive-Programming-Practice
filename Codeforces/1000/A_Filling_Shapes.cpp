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
    if (n % 2)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (1LL << n / 2) << endl;
    }

    return 0;
}