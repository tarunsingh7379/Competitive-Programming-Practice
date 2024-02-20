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
    char ch = 'a';
    vector<int> a(3, 0);
    for (auto c : s)
    {
        if (c == ch)
        {
            a[c - 'a']++;
        }
        else if (c == 'b' && ch == 'a')
        {
            ch = 'b';
            a[c - 'a']++;
        }
        else if (c == 'c' && ch == 'b')
        {
            ch = 'c';
            a[c - 'a']++;
        }
        else
        {
            a[0] = 0;
        }
    }
    if (a[0] > 0 && a[1] > 0 && (a[0] == a[2] || a[1] == a[2]))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}