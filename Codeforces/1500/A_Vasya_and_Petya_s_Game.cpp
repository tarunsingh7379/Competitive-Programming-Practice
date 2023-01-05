#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_prime(int x)
{
    int cnt = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            cnt += 2;
        }
        if (i * i == x)
        {
            cnt--;
        }
    }
    if (cnt == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> ans;

    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            int x = i;
            while (x <= n)
            {
                ans.push_back(x);
                x *= i;
            }
        }
    }

    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }

    return 0;
}