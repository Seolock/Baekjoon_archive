# include <iostream>
using namespace std;

int dp[1000001]={0,};

int get_count(int x){

    int a=999,b=999,c=999;

    switch(x){
        case 1: return 0;
        case 2: return 1;
        case 3: return 1;
    }

    if(x%3==0){
        if(dp[x/3]==0){
            a = get_count(x/3);
        }
        else a = dp[x/3];
    }
    if(x%2==0){
        if(dp[x/2]==0){
            b = get_count(x/2);
        }
        else b = dp[x/2];
    }
    if(dp[x-1]==0){
        c = get_count(x-1);
    }
    else c = dp[x-1];

    dp[x] = min(min(a,b),c)+1;
    return dp[x];
}


int main(){

    int x;
    cin>>x;

    cout<<get_count(x);

    return 0;
}
