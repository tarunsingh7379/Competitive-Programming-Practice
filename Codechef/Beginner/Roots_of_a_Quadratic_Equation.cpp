#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c;
    cin >> a >> b >> c;
    double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << fixed << setprecision(12);
    cout << x1 << endl;
    cout << x2 << endl;

    return 0;
}