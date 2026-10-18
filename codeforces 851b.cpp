#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) != (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3)) {
        cout << "No" << endl;
    }
    else if(x1 == x3 && y1 == y3) cout << "Yes" << endl;
    else if((y2-y1)*(x3-x1) == (y3-y1)*(x2-x1)) cout << "No" << endl;
    else cout << "Yes" << endl;
}