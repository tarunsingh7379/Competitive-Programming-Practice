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
        vector<int> even, odd;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }
        if (even.size() > 0)
        {
            cout << 1 << endl;
            cout << even[0] << endl;
        }
        else if (odd.size() > 1)
        {
            cout << 2 << endl;
            cout << odd[0] << " " << odd[1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}