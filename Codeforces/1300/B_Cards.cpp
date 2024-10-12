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

    int r = 0, g = 0, b = 0;
    for (auto c : s)
    {
        if (c == 'B')
        {
            b++;
        }
        else if (c == 'G')
        {
            g++;
        }
        else
        {
            r++;
        }
    }

    if (r > 0 && g > 0 && b > 0)
    {
        cout << "BGR" << endl;
    }
    else
    {
        if (r > 0 && g > 0)
        {
            r--;
            g--;
            b++;
            if (r > 0 && g > 0 && b > 0)
            {
                cout << "BGR" << endl;
            }
            else
            {
                if (r > 0)
                {
                    cout << "BG" << endl;
                }
                else if (g > 0)
                {
                    cout << "BR" << endl;
                }
                else
                {
                    cout << "B" << endl;
                }
            }
        }
        else if (r > 0 && b > 0)
        {
            r--;
            g++;
            b--;
            if (r > 0 && g > 0 && b > 0)
            {
                cout << "BGR" << endl;
            }
            else
            {
                if (r > 0)
                {
                    cout << "BG" << endl;
                }
                else if (b > 0)
                {
                    cout << "GR" << endl;
                }
                else
                {
                    cout << "G" << endl;
                }
            }
        }
        else if (g > 0 && b > 0)
        {
            r++;
            g--;
            b--;
            if (r > 0 && g > 0 && b > 0)
            {
                cout << "BGR" << endl;
            }
            else
            {
                if (g > 0)
                {
                    cout << "BR" << endl;
                }
                else if (b > 0)
                {
                    cout << "GR" << endl;
                }
                else
                {
                    cout << "R" << endl;
                }
            }
        }
        else
        {
            if (r > 0)
            {
                cout << "R" << endl;
            }
            else if (g > 0)
            {
                cout << "G" << endl;
            }
            else
            {
                cout << "B" << endl;
            }
        }
    }

    return 0;
}