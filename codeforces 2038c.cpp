#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<ll, int> mp;
        vector<ll> v;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        for(auto it : mp) {
            while(it.second >= 2) {
                it.second -= 2;
                v.push_back(it.first);
            }
        }
        if(v.size() <= 3) {
            cout << "NO" << endl;
            continue;
        }
        sort(v.begin(), v.end());
        int x1 = v[0], y1 = v[1];
        int x2 = v[v.size() - 2], y2 = v[v.size() - 1];
        cout << "YES" << endl;
        cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y1 << ' '
             << x1 << ' ' << y2 << ' ' << x2 << ' ' << y2 << endl;
    }
}