#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    for(int i = 1; i < n; i++) {
        cout << fixed << setprecision(12) << sqrt(1.0 * m * m / n * i) << " ";
    }
    cout << endl;
}