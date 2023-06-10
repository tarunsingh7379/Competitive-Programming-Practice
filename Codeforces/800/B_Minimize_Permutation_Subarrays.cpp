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
        vector<int> pos(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i + 1;
        }
        if (pos[n] > min(pos[1], pos[2]) && pos[n] < max(pos[1], pos[2]))
        {
            cout << pos[1] << " " << pos[1] << endl;
        }
        else if (pos[n] < min(pos[1], pos[2]))
        {
            cout << pos[n] << " " << min(pos[1], pos[2]) << endl;
        }
        else
        {
            cout << max(pos[1], pos[2]) << " " << pos[n] << endl;
        }
        t--;
    }

    return 0;
}