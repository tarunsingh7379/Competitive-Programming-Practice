#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int a[n];
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        q.push(i);
    }
    int ans = 0;
    while (!q.empty())
    {
        int ind = q.front();
        q.pop();
        a[ind] -= k;
        ans = ind;
        if (a[ind] > 0)
        {
            q.push(ind);
        }
    }
    ans++;
    cout << ans << endl;

    return 0;
}