#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(a.size(), b.size()) << endl;
    }

    return 0;
}