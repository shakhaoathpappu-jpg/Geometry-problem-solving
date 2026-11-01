#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;

    map<int, ll> a, b;
    map<pair<int, int>, ll> m;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        a[x]++;
        b[y]++;
        m[{x, y}]++;
    }

    ll ans = 0;

    for(auto [x, c] : a) ans += c * (c - 1) / 2;
    for(auto [y, c] : b) ans += c * (c - 1) / 2;
    for(auto [p, c] : m) ans -= c * (c - 1) / 2;

    cout << ans << endl;
}