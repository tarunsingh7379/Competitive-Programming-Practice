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
        vector<string> v;
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        for (int j = 0; j < 8; j++)
        {
            for (int i = 0; i < 8; i++)
            {
                if (v[i][j] != '.')
                {
                    cout << v[i][j];
                }
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}