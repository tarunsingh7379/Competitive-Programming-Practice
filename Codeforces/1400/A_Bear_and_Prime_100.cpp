#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {2, 3, 5, 7, 11, 13,
               17, 19, 23, 29, 31, 37,
               41, 43, 47, 53, 59, 61,
               67, 71, 73, 79, 83, 89,
               97};
    int prime = 1;
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] * a[i] << endl;
        string s;
        cin >> s;
        if (s == "yes")
        {
            prime = 0;
        }
    }
    if (prime == 0)
    {
        cout << "composite" << endl;
    }
    else
    {
        int cnt = 0;
        for (int i = 0; i < 15; i++)
        {
            cout << a[i] << endl;
            string s;
            cin >> s;
            if (s == "yes")
            {
                cnt++;
            }
        }
        if (cnt >= 2)
        {
            cout << "composite" << endl;
        }
        else
        {
            cout << "prime" << endl;
        }
    }
    return 0;
}