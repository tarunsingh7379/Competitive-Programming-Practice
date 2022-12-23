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
    while (n > 9)
    {
        string s = to_string(n);
        int sum = 0;
        for (auto c : s)
        {
            sum += (c - '0');
        }
        n = sum;
    }
    cout << n << endl;
    return 0;
}