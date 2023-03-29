#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y')
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        cout << "#Black&White" << endl;
    }
    else
    {
        cout << "#Color" << endl;
    }

    return 0;
}