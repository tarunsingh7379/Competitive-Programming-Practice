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
    int a[n], b[n];
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int last = 0;
    for (int i = 0; i < n; i++)
    {
        int ind = pos[b[i]];
        if (ind > last)
        {
            cout << ind - last << " ";
            last = ind;
        }
        else
        {
            cout << 0 << " ";
        }
    }

    return 0;
}