#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int a, b;
        cin >> a >> b;
        int d = abs(a - b);
        cout << (d % 2 == 0 ? "Bob" : "Alice") << "\n";
        t--;
    }

    return 0;
}