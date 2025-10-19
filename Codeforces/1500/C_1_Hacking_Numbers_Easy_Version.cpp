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
        ll n;
        cin >> n;
        ll x;
        cout << "digit" << endl;
        cin >> x;
        cout << "digit" << endl;
        cin >> x;
        cout << "add -8" << endl;
        cin >> x;
        cout << "add -4" << endl;
        cin >> x;
        cout << "add -2" << endl;
        cin >> x;
        cout << "add -1" << endl;
        cin >> x;
        cout << "add " << n - 1 << endl;
        cin >> x;
        cout << "!" << endl;
        cin >> x;
        t--;
    }

    return 0;
}