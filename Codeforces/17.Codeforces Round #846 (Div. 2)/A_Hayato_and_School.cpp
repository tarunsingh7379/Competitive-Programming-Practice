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
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2)
            {
                odd.push_back(i + 1);
            }
            else
            {
                even.push_back(i + 1);
            }
        }
        if (odd.size() >= 3)
        {
            cout << "YES" << endl;
            cout << odd[0] << " " << odd[1] << " " << odd[2] << endl;
        }
        else if (odd.size() >= 1)
        {
            if (even.size() >= 2)
            {
                cout << "YES" << endl;
                cout << odd[0] << " " << even[0] << " " << even[1] << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}