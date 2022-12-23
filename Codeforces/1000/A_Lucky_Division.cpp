#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    for (int i = 0; i <= 7; i++)
    {
        string s;
        for (int j = 0; j < 3; j++)
        {
            if (i & (1 << j))
            {
                s.push_back('4');
            }
            else
            {
                s.push_back('7');
            }
        }
        v.push_back(stoi(s));
    }

    v.push_back(4);
    v.push_back(7);
    v.push_back(47);
    v.push_back(74);
    v.push_back(44);
    v.push_back(77);

    int n;
    cin >> n;
    int flag = 0;
    for (auto num : v)
    {
        if (n % num == 0)
        {
            flag = 1;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}