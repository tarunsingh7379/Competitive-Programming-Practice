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
    vector<int> freq(k, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != k)
        {
            freq[a[i]]++;
        }
    }
    for (int i = 1; i < k; i++)
    {
        while (freq[i] >= (i + 1))
        {
            freq[i] -= (i + 1);
            freq[i + 1]++;
        }
    }
    bool ok = true;
    for (int i = 1; i < k; i++)
    {
        if (freq[i])
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;

    return 0;
}