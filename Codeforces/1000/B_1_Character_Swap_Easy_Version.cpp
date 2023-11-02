#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                v1.push_back(a[i]);
                v2.push_back(b[i]);
            }
        }
        if (v1.size() == 0)
        {
            cout << "Yes" << endl;
        }
        else if (v1.size() == 1)
        {
            cout << "No" << endl;
        }
        else if (v1.size() == 2)
        {
            swap(v1[0], v2[1]);
            if (v1[0] == v2[0] && v1[1] == v2[1])
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
        t--;
    }

    return 0;
}