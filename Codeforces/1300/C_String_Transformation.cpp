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
    int req = 0;
    for (int i = 0; i < n && req < 26; i++)
    {
        if (s[i] <= (req + 'a'))
        {
            s[i] = req + 'a';
            req++;
        }
    }
    if (req == 26)
    {
        cout << s << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}