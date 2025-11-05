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
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    string s;
    cin >> s;
    string target;
    target.push_back('<');
    target.push_back('3');
    for (auto x : v)
    {
        for (auto c : x)
        {
            target.push_back(c);
        }
        target.push_back('<');
        target.push_back('3');
    }
    int j = 0;
    for (int i = 0; i < s.size() && j < target.size(); i++)
    {
        if (s[i] == target[j])
        {
            j++;
        }
    }
    if (j == target.size())
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}