#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll N=2e7+10;
ll trees[N];

bool isSufficient(ll h,ll n,ll m){
   ll wood=0;
   for(ll i=0;i<n;i++){
      if(trees[i]>h){
         wood+=(trees[i]-h);
      }
   }
   return wood>=m;
}

int main(){
   ll n,m;cin>>n>>m;
   for(ll i=0;i<n;i++) cin>>trees[i];
   ll lo=0,hi=1e9+1;

   while(hi-lo>1){
     ll mid=(lo+hi)/2;

     if(isSufficient(mid,n,m)){
        lo=mid;
     }
     else{
        hi=mid-1;
     }
   }

   if(isSufficient(hi,n,m)){
       cout<<hi<<"\n";
   }
   else{
      cout<<lo<<"\n";
   }

   return 0;
}
