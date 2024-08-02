#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, k;
    cin >> a >> b >> k;
    vector<int> ans(a + b, 0);
    if (k % 2 == 0)
    {
        if (a <= b)
        {
            for (int i = 0; i < k / 2; i++)
            {
                cout << "10";
            }
            cout << string(a - k / 2, '0');
            cout << string(b - k / 2, '1');
        }
        else
        {
            for (int i = 0; i < k / 2; i++)
            {
                cout << "01";
            }
            cout << string(b - k / 2, '1');
            cout << string(a - k / 2, '0');
        }
    }
    else
    {
        if (a <= b)
        {
            for (int i = 0; i < k / 2; i++)
            {
                cout << "10";
            }
            cout << string(b - k / 2, '1');
            cout << string(a - k / 2, '0');
        }
        else
        {
            for (int i = 0; i < k / 2; i++)
            {
                cout << "01";
            }
            cout << string(a - k / 2, '0');
            cout << string(b - k / 2, '1');
        }
    }

    return 0;
}