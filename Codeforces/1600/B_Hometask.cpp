#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> freq(10, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        freq[x]++;
    }
    if (freq[0] == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        ll sum = 0;
        for (ll i = 0; i <= 9; i++)
        {
            sum += freq[i] * i;
        }
        ll r = sum % 3;
        bool done = false;
        if (r == 0)
        {
            done = true;
        }
        else if (r == 1)
        {
            for (ll i = 1; i <= 9; i++)
            {
                if (i % 3 == 1 && freq[i] > 0)
                {
                    freq[i]--;
                    done = true;
                    break;
                }
            }
            if (!done)
            {
                ll cnt = 0;
                for (ll i = 1; i <= 9 && cnt < 2; i++)
                {
                    if (i % 3 == 2 && freq[i] > 0)
                    {
                        freq[i]--;
                        cnt++;
                        if (cnt < 2 && freq[i] > 0)
                        {
                            cnt++;
                            freq[i]--;
                        }
                    }
                }
                if (cnt == 2)
                {
                    done = true;
                }
            }
        }
        else
        {
            for (ll i = 1; i <= 9; i++)
            {
                if ((i % 3) == 2 && freq[i] > 0)
                {
                    freq[i]--;
                    done = true;
                    break;
                }
            }
            if (!done)
            {
                ll cnt = 0;
                for (ll i = 1; i <= 9 && cnt < 2; i++)
                {
                    if ((i % 3) == 1 && freq[i] > 0)
                    {
                        freq[i]--;
                        cnt++;
                        if (cnt < 2 && freq[i] > 0)
                        {
                            cnt++;
                            freq[i]--;
                        }
                    }
                }
                if (cnt == 2)
                {
                    done = true;
                }
            }
        }
        if (!done)
        {
            cout << 0 << endl;
        }
        else
        {
            sum = 0;
            for (ll i = 9; i >= 0; i--)
            {
                sum += freq[i] * i;
            }
            if (sum == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                for (ll i = 9; i >= 0; i--)
                {
                    for (ll j = 0; j < freq[i]; j++)
                    {
                        cout << i;
                    }
                }
            }
            cout << endl;
        }
    }

    return 0;
}