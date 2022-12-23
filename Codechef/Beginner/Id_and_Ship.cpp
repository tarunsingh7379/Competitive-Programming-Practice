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

    map<char, string> m;
    m['b'] = "BattleShip";
    m['B'] = "BattleShip";
    m['c'] = "Cruiser";
    m['C'] = "Cruiser";
    m['d'] = "Destroyer";
    m['D'] = "Destroyer";
    m['f'] = "Frigate";
    m['F'] = "Frigate";
    while (t)
    {
        char c;
        cin >> c;
        cout << m[c] << endl;
        t--;
    }

    return 0;
}