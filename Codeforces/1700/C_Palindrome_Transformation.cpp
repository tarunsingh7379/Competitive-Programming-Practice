#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    k--;
    if (k > (n - 1) / 2)
    {
        reverse(s.begin(), s.end());
        k = n - 1 - k;
    }

    int left = -1, right = -1;
    for (int i = 0; i <= k; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            left = i;
            break;
        }
    }
    for (int i = k; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            right = i;
        }
    }

    int cost = 0;
    if (left == -1)
    {
        left = k;
    }
    if (right == -1)
    {
        right = k;
    }

    for (int i = left; i <= right; i++)
    {
        int x = (s[i] - s[n - 1 - i] + 26) % 26;
        int y = (s[n - 1 - i] - s[i] + 26) % 26;
        cost += min(x, y);
    }

    int mi = min((right - k) * 2 + (k - left), (k - left) * 2 + (right - k));
    cost += mi;
    cout << cost << endl;

    return 0;
}