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

    int n = a.size(), m = b.size();
    if (n != m)
    {
        cout << "NO" << endl;
    }
    else if (a == b)
    {
        cout << "YES" << endl;
    }
    else if (n == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        vector<int> freq1(2, 0), freq2(2, 0);
        for (auto c : a)
        {
            freq1[c - '0']++;
        }
        for (auto c : b)
        {
            freq2[c - '0']++;
        }
        if (freq1[1] == 0)
        {
            cout << "NO" << endl;
        }
        else if (freq2[1] > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}