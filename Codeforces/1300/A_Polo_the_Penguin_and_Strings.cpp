#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    if (k > n)
    {
        cout << -1 << endl;
    }
    else
    {
        if (k == 1)
        {
            if (n == 1)
            {
                cout << "a" << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            int len = n - k + 2;
            for (int i = 0; i < len; i++)
            {
                if (i % 2 == 0)
                    cout << "a";
                else
                    cout << "b";
            }
            for (int j = 2; j < k; j++)
            {
                cout << (char)('a' + j);
            }
        }
    }

    return 0;
}