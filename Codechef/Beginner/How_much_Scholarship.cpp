#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll rank;
    cin >> rank;
    if (rank >= 1 && rank <= 50)
    {
        cout << 100 << endl;
    }
    else if (rank <= 100)
    {
        cout << 50 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}