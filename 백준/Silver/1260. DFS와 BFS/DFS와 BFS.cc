# include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

class node{        
public:
    int val;
    vector<node*> edges;
    int state;

    node(int a){
        val = a;
    }
    void add_edges(node* x){
        edges.push_back(x);
    }
    void sorting();
};

bool compare(node* a, node* b){
    return a->val < b->val;
}

void node::sorting(){
    sort(edges.begin(),edges.end(), compare);
}

void print_DFS(node* s){
    stack<node*> stack;
    stack.push(s);
    while(!stack.empty()){
        node* n = stack.top();
        if(n->state==0){
            cout<<n->val<<" ";
            n->state=1;
        }
        int flag=0;
        for(node* i:n->edges){
            if(i->state==0){
                stack.push(i);
                flag=1;
                break;
            }
        }
        if(flag==0){
            stack.pop();
        }
    }
    cout<<endl;
}

void print_BFS(node* s){
    queue<node*> queue;
    queue.push(s);
    while(!queue.empty()){
        node* n = queue.front();
        if(n->state==0){
            cout<<n->val<<" ";
            n->state=1;
        }
        for(node* i:n->edges){
            if(i->state==0){
                queue.push(i);
            }
        }
        queue.pop();
    }
    cout<<endl;
}

void init(vector<node*>& nodes){
    for(node* n:nodes){
        n->state=0;
    }
}

int main(){

    int a,b,c;
    cin>>a>>b>>c;
    vector<node*> nodes(a);
    int x,y;

    for(int i=0;i<a;i++){
        nodes[i] = new node(i+1);
    }
    for(int i=0;i<b;i++){
        cin>>x>>y;
        nodes[x-1]->add_edges(nodes[y-1]);
        nodes[y-1]->add_edges(nodes[x-1]);
    }
    for(int i=0;i<a;i++){
        nodes[i]->sorting();
    }

    init(nodes);
    print_DFS(nodes[c-1]);
    init(nodes);
    print_BFS(nodes[c-1]);

}
