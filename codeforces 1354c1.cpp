#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << fixed << setprecision(12) << 1 / tan(PI / (2 * n)) << endl;
    }
}