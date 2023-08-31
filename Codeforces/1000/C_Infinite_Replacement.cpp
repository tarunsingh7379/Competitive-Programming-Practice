#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T)
    {
        string s;
        cin >> s;
        string t;
        cin >> t;
        int n = s.size();
        int flag = 0;
        for (auto c : t)
        {
            if (c == 'a')
            {
                flag = 1;
                break;
            }
        }
        if (t == "a")
        {
            cout << 1 << endl;
        }
        else
        {
            if (flag == 1)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << (1LL << n) << endl;
            }
        }
        T--;
    }

    return 0;
}