#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int a[200005];

struct Node
{
    int totalSum, prefixSum, suffixSum, maxSum;
};

Node seg[4 * 200004];

void build(int ind, int low, int high)
{
    if (low == high)
    {
        Node p;
        p.totalSum = a[low];
        p.prefixSum = a[low];
        p.suffixSum = a[low];
        p.maxSum = max(0, a[low]);
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

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].push_back(i);
            a[i] = -1;
        }
        build(0, 0, n - 1);
        ll ans = 0, val = 0;
        for (auto num : mp)
        {
            ll curr = num.first;
            for (auto ind : num.second)
            {
                update(0, 0, n - 1, ind, 1);
            }
            ll x = seg[0].maxSum;
            if (x > ans)
            {
                ans = x;
                val = curr;
            }
            for (auto ind : num.second)
            {
                update(0, 0, n - 1, ind, -1);
            }
        }

        for (auto ind : mp[val])
        {
            a[ind] = 1;
        }

        int sum = 0, l = 0, r = 0, st = 0;
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum > ans)
            {
                ans = sum;
                l = st;
                r = i;
            }
            if (sum < 0)
            {
                sum = 0;
                st = i + 1;
            }
        }
        cout << val << " " << l + 1 << " " << r + 1 << endl;

        t--;
    }

    return 0;
}