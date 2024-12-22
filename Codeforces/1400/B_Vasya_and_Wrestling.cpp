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
    vector<int> a, b;
    ll sum1 = 0, sum2 = 0, last = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        last = x;
        if (x > 0)
        {
            a.push_back(x);
            sum1 += x;
        }
        else
        {
            x = abs(x);
            b.push_back(x);
            sum2 += x;
        }
    }
    if (sum1 > sum2)
    {
        cout << "first" << endl;
    }
    else if (sum1 < sum2)
    {
        cout << "second" << endl;
    }
    else
    {
        int i = 0, j = 0;
        int nn = a.size(), mm = b.size();
        int first = -1;
        while (i < nn && j < mm)
        {
            if (a[i] > b[j])
            {
                first = 1;
                break;
            }
            else if (a[i] < b[j])
            {
                first = 0;
                break;
            }
            else
            {
                i++;
                j++;
            }
        }
        if (first == 1)
        {
            cout << "first" << endl;
        }
        else if (first == 0)
        {
            cout << "second" << endl;
        }
        else
        {
            if (last > 0)
            {
                cout << "first" << endl;
            }
            else
            {
                cout << "second" << endl;
            }
        }
    }

    return 0;
}