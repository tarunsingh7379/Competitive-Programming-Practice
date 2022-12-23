#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << (a - b) << endl;
    }
    else
    {
        cout << (a + b) << endl;
    }

    return 0;
}