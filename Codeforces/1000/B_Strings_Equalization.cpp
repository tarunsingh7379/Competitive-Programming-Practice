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
        string a, b;
        cin >> a >> b;
        set<char> st(a.begin(),a.end());
        int flag = 0;
        for(auto c: b){
            if(st.count(c)){
                flag = 1;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}