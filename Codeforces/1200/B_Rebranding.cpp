#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> v(26, 0);
    for (int i = 0; i < 26; i++)
    {
        v[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        char x, y;
        cin >> x >> y;
        for (int j = 0; j < 26; j++)
        {
            if (v[j] == (x - 'a'))
            {
                v[j] = y - 'a';
            }
            else if (v[j] == (y - 'a'))
            {
                v[j] = x - 'a';
            }
        }
    }
    for (auto c : s)
    {
        cout << (char)(v[c - 'a'] + 'a');
    }
    cout << endl;

    return 0;
}