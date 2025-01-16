#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,flag=0;cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back(x);
        if(i>0){
            if(flag==0 and min(v[i],v[i-1])*2>max(v[i],v[i-1])){
                flag++;
            }
        }
    }

    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
int  main(){
    int  tc;cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}
