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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if (count(s.begin(), s.end(), 'Y'))
        {
            cout << "NOT INDIAN" << endl;
        }
        else if (count(s.begin(), s.end(), 'I'))
        {
            cout << "INDIAN" << endl;
        }
        else
        {
            cout << "NOT SURE" << endl;
        }
        t--;
    }

    return 0;
}