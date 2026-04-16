#include <bits/stdc++.h>
using namespace std;


class node{
public:
    int num;
    int time;
    int done;
    vector<node*> edges;
    node(int n, int t){
        num = n;
        time = t;
        done = -1;
    }
    void add(node* x){
        edges.push_back(x);
    }
};

vector<node> graph;

void calculate(int o){
    vector<node> queue(graph);
    for(int i=0;i<queue.size();i++){
        if(queue[i].done>=0) queue.erase(queue.begin()+i);
    }
    int flag;
    int max;
    while(!queue.empty()){
        if(graph[o-1].done>=0) break;
        for(int i=0;i<queue.size();i++){
            flag = 0;
            max = 0;
            for(node* e:queue[i].edges){
                if(e->done<0){
                    flag = 1;
                    break;
                }
                if(max < e->done){
                    max = e->done;
                }
            }
            if(flag==0){
                graph[queue[i].num-1].done = max + queue[i].time;
                queue.erase(queue.begin()+i);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n,k,o;
    int x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        graph.clear();
        cin>>n>>k;
        for(int j=0;j<n;j++){
            cin>>x;
            graph.push_back(node(j+1,x));
        }
        for(int j=0;j<k;j++){
            cin>>x>>y;
            graph[y-1].add(&graph[x-1]);
        }
        cin>>o;
        for(int j=0;j<n;j++){
            if(graph[j].edges.empty()){
                graph[j].done = graph[j].time;
            }
        }
        calculate(o);
        cout<<graph[o-1].done<<"\n";
    }

    return 0;
}
