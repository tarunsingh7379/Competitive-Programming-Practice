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
    sort(a, a + n);
    vector<int> ans(n);
    int j = 0;
    for (int i = 1; i < n; i += 2)
    {
        ans[i] = a[j++];
    }
    for (int i = 0; i < n; i += 2)
    {
        ans[i] = a[j++];
    }
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (ans[i] < ans[i - 1] && ans[i] < ans[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}