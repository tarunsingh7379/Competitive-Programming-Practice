#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    ll n = s.size();
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n == 2)
    {
        cout << 2 << endl;
    }
    else if (n == 3)
    {
        cout << 3 << endl;
    }
    else
    {
        cout << "More than 3 digits" << endl;
    }

    return 0;
}