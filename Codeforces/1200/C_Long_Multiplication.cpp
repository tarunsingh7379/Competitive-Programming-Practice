#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        ll ind = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (a[i] < b[i])
                {
                    swap(a[i], b[i]);
                }
                ind = i;
                break;
            }
        }
        if (ind != -1)
        {
            for (int i = ind + 1; i < n; i++)
            {
                if (b[i] < a[i])
                {
                    swap(b[i], a[i]);
                }
            }
        }
        cout << a << endl;
        cout << b << endl;
        t--;
    }

    return 0;
}