#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, a, b;
    cin >> n >> k >> a >> b;
    char c1 = 'G', c2 = 'B';
    if (a < b)
    {
        swap(a, b);
        swap(c1, c2);
    }
    if (a == b)
    {
        for (int i = 0; i < a; i++)
        {
            cout << "GB";
        }
        cout << endl;
    }
    else if (a > (b + 1) * k)
    {
        cout << "NO" << endl;
    }
    else
    {
        int extra = a - (b + 1);
        for (int i = 0; i <= b; i++)
        {
            cout << c1;
            int cur = min(k - 1, extra);
            extra -= cur;
            for (int i = 0; i < cur; i++)
            {
                cout << c1;
            }
            if (i != b)
                cout << c2;
        }
        cout << endl;
    }

    return 0;
}