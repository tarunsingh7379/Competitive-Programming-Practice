#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int i, int j, string &s, string &t)
{
    if (j >= t.size())
    {
        return 1;
    }
    if (i >= s.size())
    {
        return 0;
    }
    int ans = 0;
    if (s[i] == t[j])
    {
        ans += func(i + 1, j + 1, s, t);
    }
    ans += func(i + 1, j, s, t);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    string t = "QAQ";
    cout << func(0, 0, s, t) << endl;

    return 0;
}