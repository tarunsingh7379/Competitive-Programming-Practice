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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i]++;
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] % a[i - 1] == 0)
            {
                a[i]++;
            }
        }
        for (auto num : a)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}