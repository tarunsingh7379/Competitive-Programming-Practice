#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = max(3 * a / 10, a - a * c / 250);
    int y = max(3 * b / 10, b - b * d / 250);

    if (x > y)
    {
        cout << "Misha" << endl;
    }
    else if (x == y)
    {
        cout << "Tie" << endl;
    }
    else
    {
        cout << "Vasya" << endl;
    }

    return 0;
}