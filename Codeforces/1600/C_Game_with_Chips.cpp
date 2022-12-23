#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
    }
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
    }
    int moves = n + m + n * m - 3;
    cout << moves << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << "U";
    }
    for (ll i = 0; i < m - 1; i++)
    {
        cout << "L";
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m - 1; j++)
            {
                cout << "R";
            }
        }
        else
        {
            for (int j = 0; j < m - 1; j++)
            {
                cout << "L";
            }
        }
        if (i < n - 1)
        {
            cout << "D";
        }
    }

    return 0;
}