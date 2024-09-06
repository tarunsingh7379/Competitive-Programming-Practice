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
    string a, b;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int mi = 0, ma = 0;
    int j = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] <= b[j])
        {
            j--;
        }
        else
        {
            mi++;
        }
    }
    j = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] < b[j])
        {
            j--;
            ma++;
        }
    }
    cout << mi << endl;
    cout << ma << endl;

    return 0;
}