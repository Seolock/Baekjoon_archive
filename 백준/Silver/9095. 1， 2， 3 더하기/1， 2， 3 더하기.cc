#include <bits/stdc++.h>
using namespace std;

int dp[11]={0,1,2,4,};

int sum(int x){
    if(dp[x]==0) dp[x]=sum(x-1)+sum(x-2)+sum(x-3);
    return dp[x];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        cout<<sum(x)<<"\n";
    }
    
    return 0;
}