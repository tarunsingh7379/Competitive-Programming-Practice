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
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int len = (r - l + 1);
        k = k % len;
        l--;
        r--;
        s = s.substr(0, l) + s.substr(r - k + 1, k) + s.substr(l, r - l + 1 - k) + s.substr(r + 1);
    }
    cout << s << endl;

    return 0;
}