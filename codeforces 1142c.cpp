#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct P {
    ll x, y;
    ll operator * (const P &p) {
        return x * p.y - y * p.x;
    }
    bool operator < (const P &p) const {
        return make_pair(x, y) < make_pair(p.x, p.y);
    }
};

bool ccw(P a, P b, P c)
{
    c.x -= a.x;
    c.y -= a.y;
    b.x -= a.x;
    b.y -= a.y;
    return c * b <= 0;
}

int main()
{
    int n; cin >> n;
    vector<P> p(n);
    for(auto &x : p) {
        cin >> x.x >> x.y;
        x.y -= x.x * x.x;
    }
    sort(p.begin(), p.end());
    int l = 0, r = n - 1;
    while(l < n - 1 && p[l].x == p[l + 1].x) l++;
    while(r > 0 && p[r - 1].x == p[r].x) r--;
    swap(p[n - 1], p[r]);
    if(l == n - 1) {
        cout << 0 << endl;
        return 0;
    }
    vector<P> up;
    for(int i = l; i <= r; i++) {
        while(up.size() >= 2 && ccw(up[up.size() - 2], up.back(), p[i])) {
            up.pop_back();
        }
        up.push_back(p[i]);
    }
    cout << up.size() - 1 << endl;
}