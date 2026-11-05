#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int x, y, xx, yy, xxx, yyy; cin >> x >> y >> xx >> yy >> xxx >> yyy;
        if(y == yy) {
            if(yyy < yy) cout << abs(x - xx) << endl;
            else cout << 0 << endl;
        }
        else if(y == yyy) {
            if(yy < y) cout << abs(x - xxx) << endl;
            else cout << 0 << endl;
        }
        else if(yy == yyy) {
            if(y < yy) cout << abs(xx - xxx) << endl;
            else cout << 0 << endl;
        }
        else cout << 0 << endl;
    }
}