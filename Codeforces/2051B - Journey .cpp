#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,a,b,c,ans,flag=0;cin>>n>>a>>b>>c;
    ans=n/(a+b+c);
    ans*=3;
    int r=n%(a+b+c);
    if(r>0){
        ans++;
        r-=a;
    }
    if(r>0){
        ans++;
        r-=b;
    }
    if(r>0){
        ans++;
        r-=c;
    }

    cout<<ans<<"\n";
   
}
int  main(){
    int  tc;cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}
