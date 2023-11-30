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
    vector<int> a(6, 0), b(6, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[x]++;
    }
    int ans = 0;
    for (int i = 1; i <= 5; i++)
    {
        int sum = a[i] + b[i];
        if (sum % 2 != 0)
        {
            ans = -1;
            break;
        }
        sum = sum / 2;
        ans = ans + abs(a[i] - sum);
    }
    if (ans == -1)
    {
        cout << ans << endl;
    }
    else
    {
        cout << ans / 2 << endl;
    }

    return 0;
}