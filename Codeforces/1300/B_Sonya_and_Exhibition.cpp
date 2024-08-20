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
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            cout << 1;
        else
            cout << 0;
    }
    cout << endl;

    return 0;
}