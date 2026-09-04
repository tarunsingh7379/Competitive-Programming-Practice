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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> freq(7, 0);
        for (auto &c : s)
        {
            freq[c - 'A']++;
        }
        int ans = 0;
        for (int i = 0; i < 7; i++)
        {
            ans += max(0, k - freq[i]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}