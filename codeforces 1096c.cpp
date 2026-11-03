#include<bits/stdc++.h>
#define int long long
using namespace std;

inline int gcd(int x,int y)
{
	if(x>y) swap(x,y);
	while(x) y%=x,swap(x,y);
	return y;
}
signed main(int argc, char** argv)
{
	int T; cin >> T;
	while(T--)
	{
		int x; cin >> x;
		int ans=180/gcd(180,x);
		if(180/ans+x==180) ans*=2;
		cout << ans << "\n";
	}
}