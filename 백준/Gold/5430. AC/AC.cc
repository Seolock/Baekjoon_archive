#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int array[100000];
    string function;
    int begin;
    int end;
    bool reverse;
    int length;
    bool error;
    
    int num;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        error = 0;
        begin = 0;
        end = 0;
        reverse = 0;
        getline(cin,function);
        cin>>length;
        cin.ignore();
        //getline(cin,list);
        cin.ignore();
        if(length!=0){
            for(int j=0;j<length;j++){
                cin>>num;
                array[j] = num;
                cin.ignore();
            }
            end = length-1;
        }
        else cin.ignore();
        cin.ignore();

        for(int k=0;k<function.size();k++){
            if(function[k]=='R'){
                reverse = !reverse;
            }
            else{
                if(length==0){
                    error = 1;
                    break;
                }
                length--;
                if(reverse) end--;
                else begin++;
            }
        }
        if(error){
            cout<<"error\n";
        }
        else{
            cout<<"[";
            if(length!=0){
                if(reverse){
                    for(int m=end;m>=begin;m--){
                        if(m==begin) cout<<array[m];
                        else cout<<array[m]<<",";
                    }
                }
                else{
                    for(int m=begin;m<=end;m++){
                        if(m==end) cout<<array[m];
                        else cout<<array[m]<<",";
                    }
                }
            }
            cout<<"]\n";
        } 
    }

    return 0;
}
