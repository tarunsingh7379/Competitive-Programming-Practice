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

    string a = "I hate ", b = "I love ";
    int flag = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (flag == 1)
        {
            cout << a;
        }
        else
        {
            cout << b;
        }
        cout << "that ";
        flag ^= 1;
    }

    if (flag == 1)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }
    cout << "it";

    return 0;
}