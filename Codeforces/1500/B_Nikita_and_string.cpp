#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> prefix_a(n, 0), prefix_b(n, 0);
    int cnt_a = 0, cnt_b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            cnt_a++;
        }
        else
        {
            cnt_b++;
        }
        prefix_a[i] = cnt_a;
        prefix_b[i] = cnt_b;
    }
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int num_a = prefix_a[j];
            if (i - 1 >= 0)
            {
                num_a -= prefix_a[i - 1];
            }
            int num_b = 0;
            if (i - 1 >= 0)
            {
                num_b += prefix_b[i - 1];
            }
            num_b += prefix_b[n - 1];
            num_b -= prefix_b[j];
            ans = min(ans, num_a + num_b);
        }
    }
    ans = min(ans, prefix_a[n - 1]);
    ans = min(ans, prefix_b[n - 1]);
    cout << n - ans << endl;
    return 0;
}