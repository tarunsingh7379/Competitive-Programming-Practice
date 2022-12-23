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
        double s, a, b, c;
        cin >> s >> a >> b >> c;
        s = s + (s * c) / 100;
        if (s >= a && s <= b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        t--;
    }

    return 0;
}