#include<bits/stdc++.h>
using namespace std;

main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int w, d, h; cin >> w >> d >> h;
        int a, b, f, g; cin >> a >> b >> f >> g;
        int ans = a + f + abs(b - g);
        ans = min(ans, b + g + abs(a - f));
        ans = min(ans, 2 * w - a - f + abs(b - g));
        ans = min(ans, 2 * d - b - g + abs(a - f));
        cout << ans + h << "\n";
    }
}
