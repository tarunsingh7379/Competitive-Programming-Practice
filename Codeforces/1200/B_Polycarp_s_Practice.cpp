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
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int sum = 0;
    vector<int> ans;
    int last = -1;
    for (int i = n - 1; i >= n - k; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] == b[i])
            {
                ans.push_back(j);
                a[j] = -1;
                break;
            }
        }
        sum += b[i];
    }
    cout << sum << endl;
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] - last << " ";
        last = ans[i];
    }
    cout << n - 1 - last << endl;

    return 0;
}