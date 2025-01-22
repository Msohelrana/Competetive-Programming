#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    ll n,ans=0;cin>>n;
    vector<ll>m,s;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        m.push_back(x);
    }
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        s.push_back(x);
    }

    for(ll i=0;i+1<n;i++){
        if(m[i]>s[i+1]){
            ans+=(m[i]-s[i+1]);
        }
    }
    ans+=m[n-1];
    cout<<ans<<"\n";
   
   
}
int  main(){
    int  tc;cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}
