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
    vector<int> a(n), b(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << (n - 1 + mp[b[i]]) << " " << (n - 1 - mp[b[i]]) << endl;
    }
    return 0;
}