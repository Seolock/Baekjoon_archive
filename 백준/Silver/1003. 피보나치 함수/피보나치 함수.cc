# include <iostream>
using namespace std;


int dp[41][2]={0,};

void fibo(int x){
    if(x==0){
        dp[x][0]=1;
        dp[x][1]=0;
        return;
    }
    if(x==1){
        dp[x][0]=0;
        dp[x][1]=1;
        return;
    }
    if(dp[x-1][0]==0 && dp[x-1][1]==0){
        fibo(x-1);
    }
    if(dp[x-2][0]==0 && dp[x-2][1]==0){
        fibo(x-2);
    }
    dp[x][0]= dp[x-1][0]+dp[x-2][0];
    dp[x][1]= dp[x-1][1]+dp[x-2][1];
}


int main(){

    int x;
    cin>>x;
    int n;
    for(int i=0;i<x;i++){
        cin>>n;
        fibo(n);
        printf("%d %d\n",dp[n][0],dp[n][1]);
    }

    return 0;
}
