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

    for (int i = 0; i < n; i++)
    {
        int d = i % 4;
        if (d == 0 || d == 1)
        {
            cout << 'a';
        }
        else
        {
            cout << 'b';
        }
    }

    return 0;
}