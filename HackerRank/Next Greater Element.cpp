#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll N=2e5+10;

ll a[N];
int main(){
    ll n;cin>>n;
    for(ll i=0;i<n;i++) cin>>a[i];
    ll nge[n+1];
    stack<int>st;
    for(ll i=0;i<n;i++){

       while(!st.empty() and a[st.top()]<a[i]){
           //cout<<st.top();
           nge[st.top()]=a[i];
           st.pop();

       }
       st.push(i);

    }
    while(!st.empty()){
       nge[st.top()]=-1;
       st.pop();
    }
    for(ll i=0;i<n;i++) {
      cout<<a[i]<<" "<<nge[i]<<"\n";
    }

    return 0;
}
