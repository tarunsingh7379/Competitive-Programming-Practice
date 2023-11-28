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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> vis(n, 0);
    int i = 0, flag = 1;
    while (i < n && i >= 0)
    {
        if (vis[i])
        {
            flag = 0;
            break;
        }
        vis[i] = 1;
        if (s[i] == '<')
        {
            i -= a[i];
        }
        else
        {
            i += a[i];
        }
    }
    if (i < 0 || i >= n || flag == 1)
    {
        cout << "FINITE" << endl;
    }
    else
    {
        cout << "INFINITE" << endl;
    }
    return 0;
}