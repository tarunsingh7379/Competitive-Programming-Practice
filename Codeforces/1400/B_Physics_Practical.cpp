#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int a[n];
    vector<int> freq(5001, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    int ans = n;
    int left = 0, right = 0, tot = 0;
    for (int i = 1; i <= 5000; i++)
    {
        tot = 0;
        if (freq[i])
        {
            tot += left;
            for (int j = 2 * i + 1; j <= 5000; j++)
            {
                tot += freq[j];
            }
            ans = min(ans, tot);
        }
        left += freq[i];
    }
    cout << ans << endl;

    return 0;
}