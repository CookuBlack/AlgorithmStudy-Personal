//vector容器进阶
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

struct edge{
	int u,v,w;
	//重载小于号 
	bool operator < (const edge &t) const{
		return w < t.w;
	}
}; 
vector<edge> es;  //边集

int main(){
	int m,a,b,c;
	cin>>m;
	for(int i = 0;i < m;i++){
		cin>>a>>b>>c;
		es.push_back({a,b,c});
	}
	sort(es.begin(),es.end());
	
	for(int i = 0;i< es.size();i++)
		printf("%d %d %d\n",es[i].u,es[i].v,es[i].w);
		
//	for(auto e: es) printf("%d %d %d\n",e.u,e.v,e.w);

	
	return 0;
} 
