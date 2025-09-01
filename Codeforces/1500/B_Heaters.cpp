#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r;
    cin >> n >> r;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int last = -1, ind = 0, prev_ind = -1;
    int ans = 0;
    bool ok = true;
    while (last < n - 1 && ind < n)
    {
        if (a[ind] == 1)
        {
            int left = ind - r + 1;
            int right = ind + r - 1;
            if (last + 1 == left)
            {
                ans++;
                last = right;
                prev_ind = -1;
            }
            else if (last + 1 < left)
            {
                if (prev_ind != -1)
                {
                    last = prev_ind + r - 1;
                    ans++;
                    if (last + 1 == left)
                    {
                        ans++;
                        last = right;
                        prev_ind = -1;
                    }
                    else if (last + 1 < left)
                    {
                        ok = false;
                        break;
                    }
                    else
                    {
                        prev_ind = ind;
                    }
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                prev_ind = ind;
            }
        }
        ind++;
    }
    if (prev_ind != -1)
    {
        last = prev_ind + r - 1;
        ans++;
    }
    if (last < n - 1)
    {
        ok = false;
    }
    cout << (ok ? ans : -1) << endl;

    return 0;
}