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
    if (s.size() <= 19 && s <= "9223372036854775807")
    {
        ll x = stoll(s);
        if (x <= 127)
        {
            cout << "byte" << endl;
        }
        else if (x <= 32767)
        {
            cout << "short" << endl;
        }
        else if (x <= 2147483647)
        {
            cout << "int" << endl;
        }
        else if (x <= 9223372036854775807)
        {
            cout << "long" << endl;
        }
        cout << "hi";
    }
    else
    {
        cout << "BigInteger" << endl;
    }

    return 0;
}