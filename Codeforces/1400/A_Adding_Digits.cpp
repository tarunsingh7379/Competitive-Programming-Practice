#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, n;
    cin >> a >> b >> n;
    string temp = to_string(a);
    int x = 0;
    string ans;
    for (int i = 0; i <= 9; i++)
    {
        temp.push_back(i + '0');
        x = stoi(temp);
        if (x % b == 0)
        {
            ans = temp;
            break;
        }
        temp.pop_back();
    }
    if (ans.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans;
        for (int i = 0; i < n - 1; i++)
        {
            cout << "0";
        }
        cout << endl;
    }

    return 0;
}