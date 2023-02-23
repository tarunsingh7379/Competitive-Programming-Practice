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

    int cnt[2][2];
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; i++)
    {
        cnt[a[i] - '0'][b[i] - '0']++;
    }

    cout << (1LL * cnt[0][0] * (cnt[1][0] + cnt[1][1])) + (1LL * cnt[0][1] * cnt[1][0]) << endl;

    return 0;
}