//队列示例
#include<iostream>
#include<queue>
using namespace std;

const int N = 100010;
vector<int> e[N];  //queue库中自动包括了vector 
int vis[N];
//创建队列 
queue<int> q;


//宽搜板子 
void bfs(){
	vis[1] = 1;
	q.push(1);
	while(q.size()){
		//取对头 
		int x = q.front();
		//弹出对头 
		q.pop();
		cout<<x<<endl;
		//枚举弹出元素的儿子 
		for(auto y : e[x]){
			if(vis[y]) continue;
			vis[y] = 1;//标记
			q.push(y); 
		}
	}
}
int main(){
	int n,m,a,b;
	cin>>n>>m;  //n表示节点个数，m表示边的个数 
	for(int i = 0;i<m;i++){
		cin>>a>>b;
		//入队 
		e[a].push_back(b);
		e[b].push_back(a); //加边 
	}
	bfs(); 
}
