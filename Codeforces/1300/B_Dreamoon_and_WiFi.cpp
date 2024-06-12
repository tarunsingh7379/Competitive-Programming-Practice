#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(int ind, int cur_des, int tar_des, int &fav, int &total, string &s)
{
    if (ind >= s.size())
    {
        if (cur_des == tar_des)
        {
            fav++;
        }
        total++;
        return;
    }
    if (s[ind] == '+')
    {
        func(ind + 1, cur_des + 1, tar_des, fav, total, s);
    }
    else if (s[ind] == '-')
    {
        func(ind + 1, cur_des - 1, tar_des, fav, total, s);
    }
    else
    {
        func(ind + 1, cur_des + 1, tar_des, fav, total, s);
        func(ind + 1, cur_des - 1, tar_des, fav, total, s);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    int dest = 0;
    for (auto c : a)
    {
        if (c == '+')
        {
            dest++;
        }
        else
        {
            dest--;
        }
    }
    int fav = 0, total = 0;
    func(0, 0, dest, fav, total, b);
    double ans = 1.0 * fav / total;
    cout << fixed << setprecision(12);
    cout << ans << endl;

    return 0;
}