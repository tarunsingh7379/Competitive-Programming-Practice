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
    if (n & (n - 1))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}