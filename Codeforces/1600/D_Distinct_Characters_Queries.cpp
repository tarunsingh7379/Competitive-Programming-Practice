#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bitset<26> seg[4 * 100004];
string a;

void build(int ind, int low, int high)
{
    if (low == high)
    {
        bitset<26> b;
        b.set(a[low] - 'a');
        seg[ind] = b;
        return;
    }

    int mid = (low + high) >> 1;
    build(2 * ind + 1, low, mid);
    build(2 * ind + 2, mid + 1, high);

    seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
}

void update(int ind, int low, int high, int i, char val)
{
    if (low == high)
    {
        bitset<26> b;
        a[i] = val;
        b.set(val - 'a');
        seg[ind] = b;
        return;
    }

    int mid = (low + high) >> 1;

    if (i <= mid)
    {
        update(2 * ind + 1, low, mid, i, val);
    }
    else
    {
        update(2 * ind + 2, mid + 1, high, i, val);
    }

    seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
}

bitset<26> range(int ind, int low, int high, int l, int r)
{
    if (low >= l && high <= r)
    {
        return seg[ind];
    }

    if (l > high || low > r)
    {
        bitset<26> b;
        return b;
    }

    int mid = (low + high) >> 1;
    bitset<26> left = range(2 * ind + 1, low, mid, l, r);
    bitset<26> right = range(2 * ind + 2, mid + 1, high, l, r);
    return left | right;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a;

    int n = a.size();
    build(0, 0, n - 1);

    int q;
    cin >> q;

    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int ind;
            char val;
            cin >> ind >> val;
            ind--;
            update(0, 0, n - 1, ind, val);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            cout << range(0, 0, n - 1, l, r).count() << endl;
        }
    }

    return 0;
}