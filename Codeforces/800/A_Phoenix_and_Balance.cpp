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
    vector<int> v;
    for (int i = 0; i <= 30; i++)
    {
        v.push_back(1 << i);
    }
    while (t)
    {
        int n;
        cin >> n;
        int sum1 = 0, sum2 = 0;
        sum1 += v[n];
        int rem = n / 2 - 1;
        for (int i = 1; i <= rem; i++)
        {
            sum1 += v[i];
        }
        for (int i = rem + 1; i < n; i++)
        {
            sum2 += v[i];
        }
        cout << sum1 - sum2 << endl;
        t--;
    }

    return 0;
}