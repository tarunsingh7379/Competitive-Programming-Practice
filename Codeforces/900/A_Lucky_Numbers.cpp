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
        int l, r;
        cin >> l >> r;
        int cnt = 0, val = 0, ans = 0;
        for (int i = l; i <= r && cnt <= 100; i++, cnt++)
        {
            string s = to_string(i);
            sort(s.begin(), s.end());
            int diff = s.back() - s.front();
            if (diff > val)
            {
                val = diff;
                ans = i;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}