#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int x, int y)
{
    set<int> st;
    while (x)
    {
        st.insert(x % 10);
        x /= 10;
    }
    if (st.count(0))
        return true;
    while (y)
    {
        int d = y % 10;
        if (st.count(d))
            return true;
        y /= 10;
    }
    return false;
}

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
        int ans = 0;
        for (int i = 0;; i++)
        {
            if (check(n, i))
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}