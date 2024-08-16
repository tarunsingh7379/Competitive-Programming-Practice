#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(string &s)
{
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == ':')
                {
                    for (int k = n - 1; k > j; k--)
                    {
                        if (s[k] == ']')
                        {
                            for (int p = k - 1; p > j; p--)
                            {
                                if (s[p] == ':')
                                {
                                    for (int l = j + 1; l < p; l++)
                                    {
                                        if (s[l] == '|')
                                        {
                                            ans++;
                                        }
                                    }
                                    ans += 4;
                                    return ans;
                                }
                            }
                            return -1;
                        }
                    }
                    return -1;
                }
            }
            return -1;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << func(s) << endl;

    return 0;
}