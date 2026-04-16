# include <iostream>
using namespace std;


int main(){

    bool constructor[10000]={0,};

    for(int i=0;i<10000;i++){
        int n = i+1;
        string num = to_string(n);
        for(int j=0;j<num.length();j++){
            n += num[j]-'0';
        }
        constructor[n-1]=1;
    }

    for(int i=0;i<10000;i++){
        if(!constructor[i]) cout<<i+1<<endl;
    }

    return 0;
}