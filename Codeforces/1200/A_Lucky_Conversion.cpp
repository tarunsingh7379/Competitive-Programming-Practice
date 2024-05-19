#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    int cnt1 = 0, cnt2 = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] == '4')
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
    }
    cout << max(cnt1, cnt2) << endl;

    return 0;
}