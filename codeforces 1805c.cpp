#include<bits/stdc++.h>
using namespace std;

vector<long long> sz;
int n, m;
void solve() {
    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        int x; cin >> x;
        sz.push_back(x);
    }
    sort(sz.begin(), sz.end());
    for(int i=1; i<=m; i++) {
        long long a, b, c; cin >> a >> b >> c;
        if(c<=0) {
            cout << "NO\n";
            continue;
        }
        long double ert=4*a*c, ert2;
        ert=-sqrt(ert), ert2=-ert;
        long double kis=ert-b, nagy=ert2-b;
        kis*=-1, nagy*=-1, swap(kis, nagy);
        int lo=-1, hi=n-1, mid;
        while(hi-lo>1) {
            mid=(hi+lo)/2;
            if (sz[mid]>kis) hi=mid;
            else lo=mid;
        }
        //cout << "fontos " << kis << " " << nagy << "\n";
        if(kis<sz[hi] && sz[hi]<nagy) {
            cout << "YES\n" << sz[hi] << "\n";
        } 
        else cout << "NO\n";
    }
    sz.clear();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int w;
    cin >> w;
    while (w--) {
        solve();
    }
    return 0;
}
/*
1
2 1
0
2
1 -2 1
*/
