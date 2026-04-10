#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_perfect(ll num)
{
    ll sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return (sum == 10);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll num = 0;
    while (n)
    {
        num++;
        while (!is_perfect(num))
        {
            num++;
        }
        n--;
    }
    cout << num << endl;

    return 0;
}