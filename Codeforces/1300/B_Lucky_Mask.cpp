#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    string ss;
    while (b)
    {
        ss.push_back(b % 10 + '0');
        b /= 10;
    }
    for (int i = a + 1;; i++)
    {
        string s;
        int temp = i;
        while (temp)
        {
            int r = temp % 10;
            if (r == 4 || r == 7)
                s.push_back(r + '0');
            temp /= 10;
        }
        if (s == ss)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}