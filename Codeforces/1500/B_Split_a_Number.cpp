#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

string get_sum(string a, string b)
{
    string ans = "";
    int i = 0, j = 0, sum = 0, carry = 0;
    int n = a.size(), m = b.size();
    if (n < m)
    {
        swap(a, b);
        swap(n, m);
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (int i = 0; i < m; i++)
    {
        sum = (a[i] - '0') + (b[i] - '0') + carry;
        ans.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    for (int i = m; i < n; i++)
    {
        sum = (a[i] - '0') + carry;
        ans.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry)
    {
        ans.push_back(carry + '0');
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

string min_string(string a, string b)
{
    if (a.length() < b.length())
        return a;
    if (a.length() > b.length())
        return b;
    return (a < b) ? a : b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = s;
    for (int i = n / 2; i < n; i++)
    {
        if (s[i] != '0')
        {
            ans = min_string(ans, get_sum(s.substr(0, i), s.substr(i)));
            break;
        }
    }
    for (int i = n / 2; i < n && i < n / 2 + 20; i++)
    {
        if (s[i] != '0')
        {
            ans = min_string(ans, get_sum(s.substr(0, i), s.substr(i)));
        }
    }
    for (int i = n / 2; i >= 0; i--)
    {
        if (s[i] != '0')
        {
            ans = min_string(ans, get_sum(s.substr(0, i), s.substr(i)));
            break;
        }
    }
    for (int i = n / 2; i >= 0 && i >= n / 2 - 20; i--)
    {
        if (s[i] != '0')
        {
            ans = min_string(ans, get_sum(s.substr(0, i), s.substr(i)));
        }
    }
    cout << ans << endl;

    return 0;
}