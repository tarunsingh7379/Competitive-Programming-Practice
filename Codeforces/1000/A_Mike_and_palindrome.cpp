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
    int l = 0, r = s.size() - 1, cnt = 0;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            cnt++;
        }
        l++;
        r--;
    }
    if (cnt == 1)
    {
        cout << "YES" << endl;
    }
    else if (cnt == 0 && s.size() % 2 != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}