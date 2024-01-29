#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int k, int n, int a, int b)
{
    int cnt_a = a / k, cnt_b = b / k;
    return (cnt_a + cnt_b >= n && cnt_a > 0 && cnt_b > 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    int l = 1, r = max(a, b);
    int ans = 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid, n, a, b))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}