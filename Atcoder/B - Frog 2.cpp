

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+10;
int dp[N];
int a[N];


int minHeight(int i,int k){
     if(i==0){
       return 0;
     }
     if(dp[i]!=-1) return dp[i];
     int cost=INT_MAX;
     for(int j=1;j<=k and i-j>=0;j++){
         cost=min(cost,minHeight(i-j,k)+abs(a[i]-a[i-j]));
     }
     return dp[i]=cost;
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n,k;cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=minHeight(n-1,k);
    cout<<ans<<"\n";

	return 0;
}
