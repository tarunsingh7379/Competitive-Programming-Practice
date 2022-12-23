#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    w
        string a,
        b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }

    return 0;
}