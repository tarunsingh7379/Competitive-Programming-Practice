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

    int flag = 1;

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '1' && s[i] != '4')
        {
            flag = 0;
            break;
        }
    }

    if (s[0] != '1')
    {
        flag = 0;
    }

    for (int i = 0; i + 2 < n; i++)
    {
        if (s[i] == '4' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            flag = 0;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}