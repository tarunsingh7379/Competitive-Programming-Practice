#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (char c = 'a'; c <= 'z'; c++)
    {
        for (int i = 0; i < n && k > 0; i++)
        {
            if (s[i] == c)
            {
                s[i] = '@';
                k--;
            }
        }
    }

    for (auto c : s)
    {
        if (c != '@')
        {
            cout << c;
        }
    }

    return 0;
}