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
    string a = "hello";
    ll j = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (j < a.size() && s[i] == a[j])
        {
            j++;
        }
    }
    if (j == a.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}