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
    cout << n / 2 << endl;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        int cnt = n / 2 - 1;
        for (int i = 0; i < cnt; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }

    return 0;
}