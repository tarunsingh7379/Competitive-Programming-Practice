// https://cses.fi/problemset/task/1190/

#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll a[200005];

struct Node
{
    ll totalSum, prefixSum, suffixSum, maxSum;
};

Node seg[4 * 200004];

// build(0,0,n-1)
void build(int ind, int low, int high)
{
    // Leaf Node
    if (low == high)
    {
        Node p;
        p.totalSum = a[low];
        p.prefixSum = a[low];
        p.suffixSum = a[low];
        p.maxSum = max(0LL, a[low]);
        seg[ind] = p;
        return;
    }

    int mid = (low + high) >> 1;
    build(2 * ind + 1, low, mid);
    build(2 * ind + 2, mid + 1, high);

    int left = 2 * ind + 1;
    int right = 2 * ind + 2;

    seg[ind].totalSum = seg[left].totalSum + seg[right].totalSum;
    seg[ind].prefixSum = max(seg[left].prefixSum, seg[left].totalSum + seg[right].prefixSum);
    seg[ind].suffixSum = max(seg[right].suffixSum, seg[right].totalSum + seg[left].suffixSum);
    seg[ind].maxSum = max({seg[left].maxSum, seg[right].maxSum, seg[ind].prefixSum, seg[ind].suffixSum, seg[left].suffixSum + seg[right].prefixSum});
}

// update(0,0,n-1,i,val)
void update(int ind, int low, int high, int i, int val)
{
    if (low == high)
    {
        Node p;
        p.totalSum = val;
        p.prefixSum = val;
        p.suffixSum = val;
        p.maxSum = max(0, val);
        seg[ind] = p;
        a[i] = val;
        return;
    }

    int mid = (low + high) >> 1;
    // then the index i , I am willing to update lies on left
    if (i <= mid)
    {
        update(2 * ind + 1, low, mid, i, val);
    }
    else
    {
        update(2 * ind + 2, mid + 1, high, i, val);
    }

    int left = 2 * ind + 1;
    int right = 2 * ind + 2;

    seg[ind].totalSum = seg[left].totalSum + seg[right].totalSum;
    seg[ind].prefixSum = max(seg[left].prefixSum, seg[left].totalSum + seg[right].prefixSum);
    seg[ind].suffixSum = max(seg[right].suffixSum, seg[right].totalSum + seg[left].suffixSum);
    seg[ind].maxSum = max({seg[left].maxSum, seg[right].maxSum, seg[ind].prefixSum, seg[ind].suffixSum, seg[left].suffixSum + seg[right].prefixSum});
}

// range(0,0,n-1,l,r)
Node range(int ind, int low, int high, int l, int r)
{
    // Complete Overlap
    // l (low high) r

    if (low >= l && high <= r)
    {
        return seg[ind];
    }

    // No Overlap
    // [low high l r] or [l r low high]
    if (l > high || low > r)
    {
        Node p;
        p.totalSum = 0;
        p.prefixSum = 0;
        p.suffixSum = 0;
        p.maxSum = 0;
        return p;
    }

    // Partial Overlap
    int mid = (low + high) >> 1;
    Node left = range(2 * ind + 1, low, mid, l, r);
    Node right = range(2 * ind + 2, mid + 1, high, l, r);

    Node p;

    p.totalSum = left.totalSum + right.totalSum;
    p.prefixSum = max(left.prefixSum, left.totalSum + right.prefixSum);
    p.suffixSum = max(right.suffixSum, right.totalSum + left.suffixSum);
    p.maxSum = max({left.maxSum, right.maxSum, p.prefixSum, p.suffixSum, left.suffixSum + right.prefixSum});

    return p;
}

// Largest Sub Array Sum
// cout << seg[0].maxSum << endl;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(0, 0, n - 1);
    while (q--)
    {
        ll ind, val;
        cin >> ind >> val;
        ind--;
        update(0, 0, n - 1, ind, val);
        cout << seg[0].maxSum << endl;
    }

    return 0;
}