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

    int ans = 1, mi = a[0], flag = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < mi)
        {
            mi = a[i];
            ans = i + 1;
            flag = 1;
        }
        else if (a[i] == mi)
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "Still Rozdil" << endl;
    }

    return 0;
}