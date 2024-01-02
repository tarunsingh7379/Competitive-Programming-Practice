#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, c;
    cin >> a >> b >> c;
    int flag = 0;
    if (a[1] == '>' && b[1] == '>')
    {
        if (a[0] == b[0])
        {
            if (a[0] == c[0] || a[0] == c[2])
            {
            }
            else
            {
                if (c[1] == '>')
                {
                    cout << a[0] << c[0] << c[2] << endl;
                    flag = 1;
                }
                else
                {
                    cout << a[0] << c[2] << c[0] << endl;
                    flag = 1;
                }
            }
        }
    }
    else if (a[1] == '>' && c[1] == '>')
    {
        if (a[0] == c[0])
        {
            if (a[0] == b[0] || a[0] == b[2])
            {
            }
            else
            {
                if (b[1] == '>')
                {
                    cout << a[0] << b[0] << b[2] << endl;
                    flag = 1;
                }
                else
                {
                    cout << a[0] << b[2] << b[0] << endl;
                    flag = 1;
                }
            }
        }
    }
    else if (b[1] == '>' && c[1] == '>')
    {
        if (b[0] == c[0])
        {
            if (b[0] == a[0] || b[0] == a[2])
            {
            }
            else
            {
                if (a[1] == '>')
                {
                    cout << b[0] << a[0] << a[2] << endl;
                    flag = 1;
                }
                else
                {
                    cout << b[0] << a[2] << a[0] << endl;
                    flag = 1;
                }
            }
        }
    }
    swap(a[0], a[2]);
    swap(b[0], b[2]);
    swap(c[0], c[2]);
    if (a[1] == '>' && b[1] == '>')
    {
        if (a[0] == b[0])
        {
            if (a[0] == c[0] || a[0] == c[2])
            {
            }
            else
            {
                if (c[1] == '>')
                {
                    cout << a[0] << c[0] << c[2] << endl;
                    flag = 1;
                }
                else
                {
                    cout << a[0] << c[2] << c[0] << endl;
                    flag = 1;
                }
            }
        }
    }
    else if (a[1] == '>' && c[1] == '>')
    {
        if (a[0] == c[0])
        {
            if (a[0] == b[0] || a[0] == b[2])
            {
            }
            else
            {
                if (b[1] == '>')
                {
                    cout << a[0] << b[0] << b[2] << endl;
                    flag = 1;
                }
                else
                {
                    cout << a[0] << b[2] << b[0] << endl;
                    flag = 1;
                }
            }
        }
    }
    else if (b[1] == '>' && c[1] == '>')
    {
        if (b[0] == c[0])
        {
            if (b[0] == a[0] || b[0] == a[2])
            {
            }
            else
            {
                if (a[1] == '>')
                {
                    cout << b[0] << a[0] << a[2] << endl;
                    flag = 1;
                }
                else
                {
                    cout << b[0] << a[2] << a[0] << endl;
                    flag = 1;
                }
            }
        }
    }
    if (flag == 0)
    {
        cout << "Impossible" << endl;
    }
    return 0;
}