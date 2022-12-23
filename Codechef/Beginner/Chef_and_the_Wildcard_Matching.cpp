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
        string a, b;
        cin >> a >> b;
        ll flag = 1;
        ll n = a.size();
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != '?' && b[i] != '?' && a[i] != b[i])
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
        t--;
    }

    return 0;
}