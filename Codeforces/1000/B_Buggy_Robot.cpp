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
    string s;
    cin >> s;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            y++;
        }
        else if (s[i] == 'D')
        {
            y--;
        }
        else if (s[i] == 'L')
        {
            x--;
        }
        else
        {
            x++;
        }
    }
    cout << n - (abs(x) + abs(y)) << endl;

    return 0;
}