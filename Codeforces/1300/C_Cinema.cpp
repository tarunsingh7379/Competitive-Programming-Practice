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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int k;
    cin >> k;
    vector<int> a(k), b(k);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    int p = 0, q = 0, ind = 1;
    for (int i = 0; i < k; i++)
    {
        int x = mp[a[i]];
        int y = mp[b[i]];
        if (x > p)
        {
            p = x;
            q = y;
            ind = i + 1;
        }
        else if (x == p)
        {
            if (y > q)
            {
                q = y;
                ind = i + 1;
            }
        }
    }
    cout << ind << endl;

    return 0;
}