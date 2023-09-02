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
    vector<string> a;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
    }
    set<char> st1, st2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j) || ((i + j) == n - 1))
            {
                st1.insert(a[i][j]);
            }
            else
            {
                st2.insert(a[i][j]);
            }
        }
    }

    if (st1.size() == 1 && st2.size() == 1 && st1 != st2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}