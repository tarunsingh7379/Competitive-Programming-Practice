#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(int a, int b, int c)
{
    if (b % 2 == c % 2)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << 0 << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int a, b, c;
        cin >> a >> b >> c;
        func(a, b, c);
        func(b, a, c);
        func(c, a, b);
        cout << endl;
        t--;
    }

    return 0;
}