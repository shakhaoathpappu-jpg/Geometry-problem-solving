#include<bits/stdc++.h>
using namespace std;
#define ll long long

const double eps = 1e-9;

int main()
{
    int r, ox, oy, cx, cy; cin >> r >> ox >> oy >> cx >> cy;
    double d = sqrt(1LL * (cx - ox) * (cx - ox) + 1LL * (cy - oy) * (cy - oy));
    cout << fixed << setprecision(12);
    if(d > r - eps) {
        cout << ox << " " << oy << " " << r << endl;
        return 0;
    }
    double x, y;

    if(d < eps) {
        x = 1.0 * r / 2;
        y = 0;
    }
    else {
        x = 1.0 * (ox - cx) / d * (d + r) / 2;
        y = 1.0 * (oy - cy) / d * (d + r) / 2;
    }
    cout << cx + x << " " << cy + y << " " << (d + r) / 2 << endl;
}