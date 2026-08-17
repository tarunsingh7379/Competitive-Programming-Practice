#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_prime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    bool ok = is_prime(m);
    for (int i = n + 1; i < m; i++)
    {
        if (is_prime(i))
            ok = false;
    }
    cout << (ok ? "YES" : "NO") << endl;

    return 0;
}