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
        ll n, k;
        cin >> n >> k;
        string s = to_string(n);
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sum += (s[i] - '0');
        }
        if (sum <= k)
        {
            cout << 0 << endl;
        }
        else
        {
            sum = 0;
            int ind = 0, prev;
            for (int i = 0; i < s.size(); i++)
            {
                prev = sum;
                sum += (s[i] - '0');
                if (sum > k)
                {
                    ind = i;
                    break;
                }
            }

            int carry = 1;
            string temp = s;
            for (int i = ind; i < temp.size(); i++)
            {
                temp[i] = '0';
            }
            int j = ind - 1;
            while (j >= 0)
            {
                if (prev + 1 > k)
                {
                    prev -= (s[j] - '0');
                    temp[j] = '0';
                    j--;
                }
                else
                {
                    break;
                }
            }
            for (int i = j; i >= 0; i--)
            {
                if (carry == 1)
                {
                    if (temp[i] == '9')
                    {
                        temp[i] = '0';
                    }
                    else
                    {
                        temp[i] = temp[i] + 1;
                        carry = 0;
                        break;
                    }
                }
            }
            if (carry == 1)
            {
                temp = "1" + temp;
            }
            ll x = stoll(temp);
            ll ans = x - n;
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}