#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void remove_zeroes(ll &x)
{
    string s = to_string(x);
    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
        {
            temp.push_back(s[i]);
        }
    }
    x = stoll(temp);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    ll sum1 = a + b;
    remove_zeroes(sum1);
    remove_zeroes(a);
    remove_zeroes(b);
    ll sum2 = a + b;
    if (sum2 == sum1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}