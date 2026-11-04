#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 999999893;

int pw(int x, int y)
{
    int ans = 1;
    for(; y; y >>= 1, x = 1LL * x * x % mod) {
        if(y & 1) ans = 1LL * ans * x % mod;
    }
    return ans;
}
void fix(int &x)
{
    if(x >= mod) x -= mod;
}

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a = 0, b = 0;
        if(n & 1) a = b = pw(2, (n + 1) / 2);
        else {
            a = pw(2, n / 2 + 1);
            b = pw(2, n / 2);
        }
        fix(a += mod - 2);
        fix(b += mod - 1);
        int x = (1LL * a * a - 2LL * (b + 1) * (b + 1)) % mod;
        fix(x += mod);
        cout << 2LL * a * pw(mod - x, mod - 2) % mod << endl;
    }
}