#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, b_cap, a_cap;
    cin >> n >> b_cap >> a_cap;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cur_a_charge = a_cap;
    int cur_b_charge = b_cap;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (cur_a_charge)
            {
                cur_a_charge--;
            }
            else if (cur_b_charge)
            {
                cur_b_charge--;
            }
            else
            {
                ans = i;
                break;
            }
        }
        else
        {
            if (cur_b_charge)
            {
                if (cur_a_charge < a_cap)
                {
                    cur_b_charge--;
                    cur_a_charge++;
                }
                else if (cur_a_charge)
                {
                    cur_a_charge--;
                }
                else
                {
                    cur_b_charge--;
                }
            }
            else if (cur_a_charge)
            {
                cur_a_charge--;
            }
            else
            {
                ans = i;
                break;
            }
        }
        if (i == n - 1)
        {
            ans = n;
        }
    }
    cout << ans << endl;

    return 0;
}