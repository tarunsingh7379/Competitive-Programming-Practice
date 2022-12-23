#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int paint;
    cin >> paint;

    vector<int> v(10);
    int mi = INT_MAX, d = -1;
    for (int i = 1; i <= 9; i++)
    {
        cin >> v[i];
        if (v[i] < mi)
        {
            mi = v[i];
            d = i;
        }
    }
    int len = paint / mi;
    string ans = "";
    for (int i = 0; i < len; i++)
    {
        ans.push_back(d + '0');
    }
    int rem = paint - len * mi;
    for (int i = 0; i < len; i++)
    {
        int extra = mi + rem;
        int new_d = -1;
        for (int j = 9; j >= 1; j--)
        {
            if (v[j] <= extra)
            {
                extra -= v[j];
                new_d = j;
                break;
            }
        }
        if (new_d != -1)
        {
            ans[i] = new_d + '0';
            rem = extra;
        }
        else
        {
            break;
        }
    }
    if (ans.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}