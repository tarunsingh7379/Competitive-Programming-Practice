#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

string get_substr(string &s, int k)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            k--;
        }
        if (k == 0)
            return s.substr(i);
    }
    return "";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    bool AAAA = true, AABB = true, ABAB = true, ABBA = true;
    for (int i = 0; i < n; i++)
    {
        vector<string> s(4);
        for (int j = 0; j < 4; j++)
        {
            cin >> s[j];
        }
        vector<string> req_sub(4);
        for (int j = 0; j < 4; j++)
        {
            req_sub[j] = get_substr(s[j], k);
        }

        bool aaaa = req_sub[0] != "" && req_sub[0] == req_sub[1] && req_sub[1] == req_sub[2] && req_sub[2] == req_sub[3];
        bool aabb = req_sub[0] != "" && req_sub[2] != "" && req_sub[0] == req_sub[1] && req_sub[2] == req_sub[3];
        bool abab = req_sub[0] != "" && req_sub[1] != "" && req_sub[0] == req_sub[2] && req_sub[1] == req_sub[3];
        bool abba = req_sub[0] != "" && req_sub[1] != "" && req_sub[0] == req_sub[3] && req_sub[1] == req_sub[2];

        AAAA &= aaaa;
        AABB &= aabb;
        ABAB &= abab;
        ABBA &= abba;
    }
    if (AAAA)
        cout << "aaaa" << endl;
    else if (AABB)
        cout << "aabb" << endl;
    else if (ABAB)
        cout << "abab" << endl;
    else if (ABBA)
        cout << "abba" << endl;
    else
        cout << "NO" << endl;

    return 0;
}