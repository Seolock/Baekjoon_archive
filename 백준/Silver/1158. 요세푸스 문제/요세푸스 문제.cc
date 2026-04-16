#include <iostream>
using namespace std;
#include <vector>

void print(vector<int> v){
    cout<<"<";
    for(int a:v){
        if(a==*(v.end()-1)) cout<<a;
        else cout<<a<<", ";
    }
    cout<<">";
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> list;
    vector<int> answer;
    for(int i=1;i<=n;i++) list.push_back(i);
    vector<int>::iterator p=list.begin();
    while(list.size()>1){
        for(int i=1;i<k;i++){
            p++;
            if(p==list.end()) p=list.begin();
        }
        answer.push_back(*p);
        list.erase(p);
        if(p==list.end()) p=list.begin();
    }
    answer.push_back(*p);
    print(answer);
}