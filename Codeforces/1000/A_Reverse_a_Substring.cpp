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
    int l = -1, r = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            l = i + 1;
            r = i + 2;
            break;
        }
    }
    if (l != -1)
    {
        cout << "YES" << endl;
        cout << l << " " << r << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}