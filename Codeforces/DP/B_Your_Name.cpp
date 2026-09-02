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
        int n;
        cin >> n;
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
        if (mp1 == mp2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}