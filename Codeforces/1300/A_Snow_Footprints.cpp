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
    string s;
    cin >> s;

    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            v1.push_back(i);
        }
        if (s[i] == 'L')
        {
            v2.push_back(i);
        }
    }

    if (v1.size() > 0 && v2.size() > 0)
    {
        cout << v1[0] + 1 << " " << v2[0] << endl;
    }
    else
    {
        if (v1.size() > 0)
        {
            cout << v1[0] + 1 << " " << v1.back() + 2 << endl;
        }
        else
        {
            cout << v2.back() + 1 << " " << v2[0] << endl;
        }
    }

    return 0;
}