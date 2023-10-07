#include<iostream>
using namespace std;
// level wise traversal depending upon the starting node
int main(){
    int vis[n]={0};
    vis[0]=0;
    queue<int>q;
    q.push(0);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push(node);

        for(auto it :adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return 
}