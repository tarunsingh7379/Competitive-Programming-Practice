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
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (abs(sum1 + x - sum2) <= 500)
        {
            sum1 += x;
            cout << "A";
        }
        else
        {
            sum2 += y;
            cout << "G";
        }
    }

    return 0;
}