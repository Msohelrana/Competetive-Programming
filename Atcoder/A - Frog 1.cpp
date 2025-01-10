

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+10;
int dp[N];
int a[N];
int n,h=0;

int minHeight(int i){
     if(i==0){
       return 0;
     }
     if(dp[i]!=-1) return dp[i];
     int cost=INT_MAX;

     cost=min(cost,minHeight(i-1)+abs(a[i]-a[i-1]));
     if(i>1)cost=min(cost,minHeight(i-2)+abs(a[i]-a[i-2]));
     return dp[i]=cost;
}
int main(){
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=minHeight(n-1);
    cout<<ans<<"\n";

	return 0;
}
