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
    vector<int> ans(n, -1);
    vector<int> used(n + 1, 0);
    used[a[n - 1]] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            ans[i] = a[i - 1];
            used[a[i - 1]] = 1;
        }
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == -1)
        {
            while (used[j])
            {
                j++;
            }
            ans[i] = j;
            used[j] = 1;
        }
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}