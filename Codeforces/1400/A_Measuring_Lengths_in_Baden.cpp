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
    int inch = n / 3 + (n % 3 >= 2 ? 1 : 0);
    cout << inch / 12 << " " << inch % 12 << endl;

    return 0;
}