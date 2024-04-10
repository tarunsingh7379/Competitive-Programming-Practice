#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_possible(string &s, vector<int> &pos)
{
    if (s[1] == '>' && pos[s[0] - 'A'] <= pos[s[2] - 'A'])
        return false;
    if (s[1] == '<' && pos[s[0] - 'A'] >= pos[s[2] - 'A'])
        return false;
    return true;
}

bool check(string s, string &a, string &b, string &c)
{
    vector<int> pos(3, 0);
    for (int i = 0; i < s.size(); i++)
    {
        pos[s[i] - 'A'] = i + 1;
    }
    return is_possible(a, pos) && is_possible(b, pos) && is_possible(c, pos);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, c;
    cin >> a >> b >> c;
    string ans = "ABC";
    string ret = "Impossible";
    do
    {
        if (check(ans, a, b, c))
        {
            ret = ans;
            break;
        }
    } while (next_permutation(ans.begin(), ans.end()));
    cout << ret << endl;
    return 0;
}