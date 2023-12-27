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
    int a[n];
    vector<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2)
        {
            odd.push_back(a[i]);
        }
        else
        {
            even.push_back(a[i]);
        }
    }
    if (odd.size() > 0 && even.size() > 0)
    {
        sort(a, a + n);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}