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
    int used = 1;
    for (int i = 0; i < n; i++)
    {
        while (mp[used])
        {
            used++;
        }
        if (mp[a[i]] > 1 || a[i] > n)
        {
            mp[a[i]]--;
            a[i] = used;
            used++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}