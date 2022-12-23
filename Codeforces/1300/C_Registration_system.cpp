#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp.find(s) != mp.end())
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
        else
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
    }

    return 0;
}