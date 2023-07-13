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
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << "1 2" << endl;
        }
        else
        {
            vector<int> a(n, 0);
            a[0] = 2;
            a[n / 2] = 1;
            a[n - 1] = 3;
            int cnt = 4;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 0)
                {
                    a[i] = cnt++;
                }
            }
            for (auto num : a)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}