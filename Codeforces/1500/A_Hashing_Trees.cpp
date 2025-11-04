#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    int idx = 0;
    while (idx + 1 <= n && (a[idx] == 1 || a[idx + 1] == 1))
    {
        idx++;
    }
    if (idx == n)
    {
        cout << "perfect" << endl;
    }
    else
    {
        vector<int> prefix(n + 1, 0);
        prefix[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i - 1];
        }
        cout << "ambiguous" << endl;
        cout << "0 ";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < a[i]; j++)
            {
                cout << prefix[i - 1] << " ";
            }
        }
        cout << endl;
        cout << "0 ";
        for (int i = 1; i <= n; i++)
        {
            if (i == idx + 1)
            {
                cout << prefix[i - 1] + 1 << " ";
                for (int j = 1; j < a[i]; j++)
                {
                    cout << prefix[i - 1] << " ";
                }
            }
            else
            {
                for (int j = 0; j < a[i]; j++)
                {
                    cout << prefix[i - 1] << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}