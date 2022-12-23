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
    map<char, string> mp;
    mp['B'] = "BattleShip";
    mp['b'] = "BattleShip";
    mp['C'] = "Cruiser";
    mp['c'] = "Cruiser";
    mp['D'] = "Destroyer";
    mp['d'] = "Destroyer";
    mp['F'] = "Frigate";
    mp['f'] = "Frigate";
    while (t)
    {
        char x;
        cin >> x;
        cout << mp[x] << endl;
        t--;
    }

    return 0;
}