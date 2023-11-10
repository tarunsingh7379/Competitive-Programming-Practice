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
    int first = -1, second = -1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        if (mp[x] == 1)
        {
            if (first == -1)
                first = x;
            else
                second = x;
        }
    }
    if (mp.size() == 2 && mp[first] == mp[second])
    {
        cout << "YES" << endl;
        cout << first << " " << second << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}