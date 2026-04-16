#include <bits/stdc++.h>
using namespace std;


double dist(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int x1,y1,x2,y2,r1,r2;
    double d;
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        d = dist(x1,y1,x2,y2);
        if(x1==x2&&y1==y2&&r1==r2){
            cout<<"-1\n";
        }
        else if(d>r1+r2 || d<abs(r1-r2)){
            cout<<"0\n";
        }
        else if(d==r1+r2 || d==abs(r1-r2)){
            cout<<"1\n";
        }
        else{ //(d<r1+r2 || d>abs(r1-r2))
            cout<<"2\n";
        }
    }

    return 0;
}
