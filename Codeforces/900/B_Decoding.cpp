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
    deque<char> ans;
    int ind = 0;
    ans.push_back(s[ind++]);
    if (n % 2 == 0)
    {
        ans.push_back(s[ind++]);
    }
    int flag = 1;
    for (int i = ind; i < n; i++)
    {
        if (flag == 1)
            ans.push_front(s[i]);
        else
            ans.push_back(s[i]);
        flag ^= 1;
    }
    for (auto num : ans)
    {
        cout << num;
    }
    cout << endl;

    return 0;
}