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
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '.')
                {
                    if (j % 2 == 0)
                    {
                        v[i][j] = 'W';
                    }
                    else
                    {
                        v[i][j] = 'B';
                    }
                }
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '.')
                {
                    if (j % 2 == 0)
                    {
                        v[i][j] = 'B';
                    }
                    else
                    {
                        v[i][j] = 'W';
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}