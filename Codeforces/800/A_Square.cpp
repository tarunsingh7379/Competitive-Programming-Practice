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
        set<int> st1, st2;
        for (int i = 0; i < 4; i++)
        {
            int x, y;
            cin >> x >> y;
            st1.insert(x);
            st2.insert(y);
        }
        vector<int> v(st1.begin(), st1.end());
        int d = abs(v[1] - v[0]);
        int ans = d * d;
        cout << ans << endl;
        t--;
    }

    return 0;
}