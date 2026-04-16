#include <bits/stdc++.h>
using namespace std;

__int128 fac(int x){
    __int128 a=1;
    for(int i=1;i<=x;i++){
        a*=i;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x==0) cout<<"0\n";
        else if(x==y) cout<<"1\n";
        else{
            long long z = fac(y)/(fac(x)*fac(y-x));
            cout<<z<<"\n";
        }
    }

    return 0;
}
