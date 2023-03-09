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
    vector<int> a[3];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x--;
        a[x].push_back(i + 1);
    }

    int ans = min({a[0].size(), a[1].size(), a[2].size()});
    cout << ans << endl;
    int ind = 0;
    for (int i = 0; i < ans; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[j][ind] << " ";
        }
        ind++;
        cout << endl;
    }

    return 0;
}