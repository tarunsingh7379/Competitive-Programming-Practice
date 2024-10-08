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
    string ans;
    if (n == 12)
    {
        int x = stoi(s.substr(0, 2));
        if (x >= 1 && x <= 12)
        {
            ans.push_back(s[0]);
            ans.push_back(s[1]);
        }
        else if (x == 0)
        {
            ans.push_back('0');
            ans.push_back('1');
        }
        else if (x % 10 == 0)
        {
            ans.push_back('1');
            ans.push_back(s[1]);
        }
        else
        {
            ans.push_back('0');
            ans.push_back(s[1]);
        }
        ans.push_back(':');
        x = stoi(s.substr(3));
        if (x <= 59)
        {
            ans.push_back(s[3]);
            ans.push_back(s[4]);
        }
        else
        {
            ans.push_back('0');
            ans.push_back(s[4]);
        }
    }
    else
    {
        int x = stoi(s.substr(0, 2));
        if (x <= 23)
        {
            ans.push_back(s[0]);
            ans.push_back(s[1]);
        }
        else
        {
            ans.push_back('0');
            ans.push_back(s[1]);
        }
        ans.push_back(':');
        x = stoi(s.substr(3));
        if (x <= 59)
        {
            ans.push_back(s[3]);
            ans.push_back(s[4]);
        }
        else
        {
            ans.push_back('0');
            ans.push_back(s[4]);
        }
    }
    cout << ans << endl;
    return 0;
}