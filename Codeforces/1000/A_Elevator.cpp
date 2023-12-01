#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    int x;
    cin >> x;
    if (s == "front")
        cout << (x == 1 ? 'L' : 'R') << endl;
    else
        cout << (x == 2 ? 'L' : 'R') << endl;
    return 0;
}