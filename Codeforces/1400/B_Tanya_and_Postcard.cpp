#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    map<char, int> mp1, mp2;
    for (auto c : a)
    {
        mp1[c]++;
    }
    for (auto c : b)
    {
        mp2[c]++;
    }

    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < 26; i++)
    {
        int x = min(mp1[i + 'a'], mp2[i + 'a']) + min(mp1[i + 'A'], mp2[i + 'A']);
        ans1 += x;
        ans2 += (min(mp1[i + 'a'] + mp1[i + 'A'], mp2[i + 'a'] + mp2[i + 'A']) - x);
    }
    cout << ans1 << " " << ans2 << endl;

    return 0;
}