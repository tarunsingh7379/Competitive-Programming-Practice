#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = n - 1;
        int flag = 1;
        int prev_alice = 0, prev_bob = 0, tot_alice = 0, tot_bob = 0, turn = 0;
        while (l <= r)
        {
            if (flag)
            {
                int cur_alice = 0;
                while (l <= r && cur_alice <= prev_bob)
                {
                    cur_alice += a[l];
                    tot_alice += a[l];
                    l++;
                }
                prev_alice = cur_alice;
            }
            else
            {
                int cur_bob = 0;
                while (r >= l && cur_bob <= prev_alice)
                {
                    cur_bob += a[r];
                    tot_bob += a[r];
                    r--;
                }
                prev_bob = cur_bob;
            }
            flag ^= 1;
            turn++;
        }
        cout << turn << " " << tot_alice << " " << tot_bob << endl;
        t--;
    }

    return 0;
}