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
        string s;
        cin >> s;
        int n = s.size();
        int cnt = count(s.begin(), s.end(), 'C');
        if (s[0] == 'R' && s[1] >= '0' && s[1] <= '9' && cnt > 0)
        {
            string r = "", c = "";
            int i = 1;
            while (i < n)
            {
                if (s[i] != 'C')
                {
                    r.push_back(s[i]);
                }
                else
                {
                    break;
                }
                i++;
            }
            i++;
            while (i < n)
            {
                c.push_back(s[i]);
                i++;
            }
            int col = stoi(c);
            string cl;
            while (col)
            {
                int r = (col - 1) % 26;
                cl.push_back(r + 'A');
                col = (col - 1) / 26;
            }
            reverse(cl.begin(), cl.end());
            cout << cl << r << endl;
        }
        else
        {
            string c;
            int i = 0;
            while (i < n)
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    break;
                }
                c.push_back(s[i]);
                i++;
            }
            string r;
            while (i < n)
            {
                r.push_back(s[i]);
                i++;
            }
            int col = 0;
            int p = 1;
            for (int i = c.size() - 1; i >= 0; i--)
            {
                col += (p * (c[i] - 'A' + 1));
                p *= 26;
            }
            cout << "R" << r << "C" << col << endl;
        }
        t--;
    }

    return 0;
}