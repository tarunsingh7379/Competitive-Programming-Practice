#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> pos(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pos[a[i]] = i;
    }
    int ma = 1, cnt = 1;
    for (int i = 2; i <= n; i++)
    {
        if (pos[i] > pos[i - 1])
        {
            cnt++;
        }
        else
        {
            ma = max(ma, cnt);
            cnt = 1;
        }
    }
    ma = max(ma, cnt);
    cout << n - ma << endl;

    return 0;
}