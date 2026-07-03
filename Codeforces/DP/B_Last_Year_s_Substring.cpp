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
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ok = false;
        for (int k = 0; k <= 4; k++)
        {
            if (s.substr(0, k) + s.substr(n - (4 - k)) == "2020")
            {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}