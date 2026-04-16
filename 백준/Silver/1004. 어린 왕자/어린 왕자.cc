#include <bits/stdc++.h>
using namespace std;

double dist(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

bool inside(int x, int y, int r, int xx, int yy){
    return dist(x,y,xx,yy)<r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n;
    int x1,y1,x2,y2;
    int x,y,r;
    int c;
    for(int i=0;i<n;i++){
        c=0;
        cin>>x1>>y1>>x2>>y2>>m;
        for(int j=0;j<m;j++){
            cin>>x>>y>>r;
            if(!inside(x,y,r,x1,y1)&&inside(x,y,r,x2,y2)||inside(x,y,r,x1,y1)&&!inside(x,y,r,x2,y2)){
                c++;
            }
        }
        cout<<c<<"\n";
    }

    return 0;
}
