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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            vector<int> temp = a;

            for (int k = i; k <= j; k++)
            {
                temp[k] = 1 - temp[k];
            }
            int cnt = 0;
            for (int k = 0; k < n; k++)
            {
                if (temp[k] == 1)
                {
                    cnt++;
                }
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
    return 0;
}