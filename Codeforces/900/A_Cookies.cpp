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
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    if (odd % 2 == 0)
    {
        cout << even << endl;
    }
    else
    {
        cout << odd << endl;
    }
    return 0;
}