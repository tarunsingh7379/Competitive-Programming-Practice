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
        ll n, v1, v2;
        cin >> n >> v1 >> v2;
        double t1 = (double)(2 * n) / v2;
        double t2 = (double)(n * sqrt(2)) / v1;
        if (t1 < t2)
        {
            cout << "Elevator" << endl;
        }
        else
        {
            cout << "Stairs" << endl;
        }
        t--;
    }

    return 0;
}