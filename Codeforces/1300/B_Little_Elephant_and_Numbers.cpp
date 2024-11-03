#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int x, vector<int> &freq)
{
    while (x)
    {
        if (freq[x % 10])
        {
            return true;
        }
        x /= 10;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> freq(10, 0);
    int temp = n;
    while (temp)
    {
        freq[temp % 10]++;
        temp /= 10;
    }
    int ans = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (check(i, freq))
            {
                ans++;
            }
            if (n / i != i)
            {
                if (check(n / i, freq))
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}