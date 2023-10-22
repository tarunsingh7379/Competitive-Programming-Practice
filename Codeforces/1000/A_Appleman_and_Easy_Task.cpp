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
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int flag = 1;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int cnt = 0;
            for (int k = 0; k < 4; k++)
            {
                int x = i + dx[k];
                int y = j + dy[k];
                if (x >= 0 && y >= 0 && x < n && y < n)
                {
                    if (v[x][y] == 'o')
                    {
                        cnt++;
                    }
                }
            }
            if (cnt % 2)
            {
                flag = 0;
                break;
            }
        }
    }
    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}