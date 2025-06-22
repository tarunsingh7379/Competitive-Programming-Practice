#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int get_ans(int left, int right)
{
    if (left == right || left + 1 == right)
    {
        return 0;
    }
    else if (left > right)
    {
        return left - right;
    }
    else
    {
        return right - left - 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int ind1 = lower_bound(a.begin(), a.end(), k) - a.begin();
    int ind2 = upper_bound(a.begin(), a.end(), k) - a.begin();
    ind2--;
    int ans = INT_MAX;
    if (ind1 < n)
    {
        if (a[ind1] == k)
        {
            for (int ind = ind1; ind <= ind2; ind++)
            {
                int left = ind, right = n - 1 - ind;
                ans = min(ans, get_ans(left, right));
            }
        }
        else
        {
            int left = ind1, right = n - ind1;
            ans = min(ans, get_ans(left, right) + 1);
        }
        cout << ans << endl;
    }
    else
    {
        cout << n + 1 << endl;
    }

    return 0;
}