#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int x = 0, ma = 0;
    for (auto num : mp)
    {
        if (num.second > ma)
        {
            ma = num.second;
            x = num.first;
        }
    }
    cout << n - ma << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] < x)
                {
                    cout << 1 << " " << j + 1 << " " << j + 2 << endl;
                }
                else
                {
                    cout << 2 << " " << j + 1 << " " << j + 2 << endl;
                }
            }
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] != x)
                {
                    if (a[j] < x)
                    {
                        cout << 1 << " " << j + 1 << " " << j << endl;
                    }
                    else
                    {
                        cout << 2 << " " << j + 1 << " " << j << endl;
                    }
                }
            }
            break;
        }
    }
    return 0;
}