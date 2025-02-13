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
    int a[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < 2 * n; i += 2)
    {
        for (int j = i + 1; j < 2 * n; j++)
        {
            if (a[j] == a[i])
            {
                for (int k = j - 1; k > i; k--)
                {
                    swap(a[k], a[k + 1]);
                    ans++;
                }
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}