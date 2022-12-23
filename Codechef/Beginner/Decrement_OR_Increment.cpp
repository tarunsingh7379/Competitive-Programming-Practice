#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if (n % 4 == 0)
    {
        n++;
    }
    else
    {
        n--;
    }
    cout << n << endl;
    return 0;
}