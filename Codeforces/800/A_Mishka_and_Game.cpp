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

    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            a++;
        }
        else if (y > x)
        {
            b++;
        }
    }

    if (a > b)
    {
        cout << "Mishka" << endl;
    }
    else if (a == b)
    {
        cout << "Friendship is magic!^^" << endl;
    }
    else
    {
        cout << "Chris" << endl;
    }

    return 0;
}