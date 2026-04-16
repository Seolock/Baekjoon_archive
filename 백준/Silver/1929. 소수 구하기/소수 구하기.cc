# include <iostream>
using namespace std;


bool check(int n){
    if(n==1) return false;
    int m=2;
    while(m*m<=n){
        if(n%m==0) return false;
        m++;
    }
    return true;
}

int main(){

    int a,b;
    cin>>a>>b;

    while(a<=b){
        if(check(a)) cout<<a<<endl;
        a++;
    }

    return 0;
}
