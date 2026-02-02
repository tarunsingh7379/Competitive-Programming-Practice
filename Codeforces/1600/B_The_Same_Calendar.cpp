#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_leap_year(ll y)
{
    if (y % 400 == 0)
        return true;
    return (y % 4 == 0 && y % 100 != 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll start_day = 0;
    bool start_leap = is_leap_year(n);
    ll cur_year = n, cur_day = 0;
    while (true)
    {
        cur_year++;
        if (is_leap_year(cur_year - 1))
        {
            cur_day = (cur_day + 2) % 7;
        }
        else
        {
            cur_day = (cur_day + 1) % 7;
        }
        if (cur_day == start_day && is_leap_year(cur_year) == start_leap)
        {
            cout << cur_year << endl;
            break;
        }
    }

    return 0;
}