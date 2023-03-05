#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        n = -n;
        string s = to_string(n);
        cin >> s;

        string s1 = s;
        s1.pop_back();

        string s2 = s;
        s2.pop_back();
        if (s2.size() > 0)
        {
            s2.pop_back();
        }
        s2.push_back(s.back());
        int n1 = stoi(s1), n2 = stoi(s2);
        if (n1 < n2)
        {
            cout << -n1 << endl;
        }
        else
        {
            cout << -n2 << endl;
        }
    }

    return 0;
}