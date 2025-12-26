#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    int ind = -1;
    int n = a.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 'z')
        {
            a[i] = 'a';
        }
        else
        {
            a[i]++;
            break;
        }
    }
    if (a < b)
    {
        cout << a << endl;
    }
    else
    {
        cout << "No such string" << endl;
    }

    return 0;
}