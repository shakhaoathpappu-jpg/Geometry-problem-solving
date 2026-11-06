#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=2e5+7;
int T,n,d,h,y[N];

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cin>>T;
    cout<<fixed<<setprecision(10);
    while(T--){
        cin>>n>>d>>h;
        for(int i=1;i<=n;i++)
            cin>>y[i];
        double ans=d*h/2.;
        for(int i=1;i<n;i++){
            int dis=h-(y[i+1]-y[i]);
            ans+=d*h/2.;
            if(dis>0)ans-=d*h/2.*(1.*dis/h)*(1.*dis/h);
        }cout<<ans<<"\n";
    }
}
