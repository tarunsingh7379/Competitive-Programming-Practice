#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();
    vector<int> ans(n, 0);
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'a')
        {
            ans[i] = 1;
            ans[i - 1] ^= 1;
        }
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}