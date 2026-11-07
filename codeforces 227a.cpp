#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int xa, ya, xb, yb, xc, yc; cin >> xa >> ya >> xb >> yb >> xc >> yc;
    int x1 = xb - xa;
    int y1 = yb - ya;
    int x2 = xc - xa;
    int y2 = yc - ya;
    
    ll cr = 1LL * x1 * y2 - 1LL * x2 * y1;
    if(cr == 0) cout << "TOWARDS" << endl;
    else if(cr > 0) cout << "LEFT" << endl;
    else cout << "RIGHT" << endl;
}