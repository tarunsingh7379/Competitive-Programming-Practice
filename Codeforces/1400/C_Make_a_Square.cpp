#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(int ind, string cur, int cur_cnt, int &ans, string &s)
{
    if (ind >= s.size())
    {
        if (cur.size() == 0)
        {
            return;
        }
        if (cur[0] == '0')
        {
            return;
        }
        int x = stoi(cur);
        int y = sqrt(x);
        if (y * y == x)
        {
            ans = min(ans, cur_cnt);
        }
        return;
    }
    func(ind + 1, cur, cur_cnt + 1, ans, s);
    cur.push_back(s[ind]);
    func(ind + 1, cur, cur_cnt, ans, s);
    cur.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int cur_cnt = 0, ans = 1e8;
    string cur, s;
    s = to_string(n);
    func(0, cur, cur_cnt, ans, s);
    if (ans == 1e8)
    {
        ans = -1;
    }
    cout << ans << endl;

    return 0;
}