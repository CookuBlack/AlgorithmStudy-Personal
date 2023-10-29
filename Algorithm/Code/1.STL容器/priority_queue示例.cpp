//优先队列（大根堆）
#include<iostream>
#include<queue>
using namespace std;

const int N = 100010;
int n,m,s,a,b,c;
struct edge{
	int v,w;
}; 
vector<edge> e[N];
int d[N] ,vis[N];
priority_queue<pair<int,int>> q;

void dijkstra(){
	for(int i = 0;i<n;i++) d[i] = 1e9;
	d[1] = 0;q.push({0,1});
	while(q.size()){
		auto t = q.top();
		q.pop();
		int u = t.second;
		if(vis[u]) continue;
		vis[u] = 1; // 标记
		for(auto ed : e[u]){
			int v = ed.v,w = ed.w;
			if(d[v] > d[u]+w){
				d[v] = d[u]+w;
				q.push({-d[v] ,v});
			}
		} 
	}
}
