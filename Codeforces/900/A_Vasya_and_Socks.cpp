#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int days = 0;
    while (n > 0)
    {
        n--;
        days++;
        if (days % m == 0)
        {
            n++;
        }
    }
    cout << days << endl;

    return 0;
}