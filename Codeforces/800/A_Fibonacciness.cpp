#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int get_ans(int k, vector<int> a)
{
    int cnt = 0;
    a[2] = k;
    for (int i = 2; i < 5; i++)
    {
        if (a[i] == a[i - 1] + a[i - 2])
            cnt++;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n = 5;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            if (i == 2)
                continue;
            cin >> a[i];
        }
        int ans = get_ans(a[0] + a[1], a);
        ans = max(ans, get_ans(a[3] - a[1], a));
        cout << ans << endl;
        t--;
    }

    return 0;
}