#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> v(n);
        for(auto &x : v) {
            int a; cin >> a;
            x = 1LL << a;
        }
        sort(v.rbegin(), v.rend());
        ll s1 = 0, s2 = 0;
        for(auto x : v) {
            if(s1 <= s2) s1 += x;
            else s2 += x;
        }
        cout << s1*s2 << endl;
    }
}