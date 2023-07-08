#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(char x, vector<string> &mat)
{
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == x)
            {
                cnt++;
            }
        }
        if (cnt == 3)
        {
            return true;
        }
        cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            if (mat[j][i] == x)
            {
                cnt++;
            }
        }
        if (cnt == 3)
        {
            return true;
        }
    }
    if (mat[0][0] == x && mat[1][1] == x && mat[2][2] == x)
    {
        return true;
    }
    if (mat[0][2] == x && mat[1][1] == x && mat[2][0] == x)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        vector<string> v;
        for (int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        if (check('X', v))
        {
            cout << "X" << endl;
        }
        else if (check('O', v))
        {
            cout << "O" << endl;
        }
        else if (check('+', v))
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
        t--;
    }

    return 0;
}