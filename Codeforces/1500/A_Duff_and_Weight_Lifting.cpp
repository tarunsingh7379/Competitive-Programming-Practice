#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int freq[2000006 + 5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i <= 2000006; i++)
    {
        if (freq[i])
        {
            freq[i + 1] += freq[i] / 2;
            freq[i] %= 2;
            if (freq[i])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}