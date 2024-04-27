#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<int> v = {0, 1, 2, 3, 4};
    int ans = 0;
    do
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j += 2)
            {
                sum = sum + a[v[j]][v[j - 1]] + a[v[j - 1]][v[j]];
            }
        }
        ans = max(ans, sum);
    } while (next_permutation(v.begin(), v.end()));
    cout << ans << endl;

    return 0;
}