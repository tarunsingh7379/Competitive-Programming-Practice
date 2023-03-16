#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            cout << 0;
        }
        else
        {
            if (s[i + 1] == '.')
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
            i++;
        }
    }

    return 0;
}