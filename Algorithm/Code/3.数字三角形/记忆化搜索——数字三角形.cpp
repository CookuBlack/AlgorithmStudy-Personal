//记忆化搜索——数字三角形
#include<iostream>

using namespace std;
#define N 10010
int f[N][N];	//定义一个备忘录，用于记录递归信息 
int a[9][9] = {{1},
				{4,6},
				{8,3,9},
				{5,7,2,1}};    //用于构造数字三角形 	
int n = 4,e;

int dfs(int x,int y){
	//先对备忘录进行查询
	if(f[x][y] != 0) return f[x][y];
	if(x == n -1) f[x][y] = a[x][y];	//定义边界条件
	else
		f[x][y] = a[x][y] + max(dfs(x+1,y),dfs(x+1,y+1));
	return f[x][y];
	
	
}


int main(){

//	cin>>n;  //数字三角形的层数 
//	//构建数字三角形 
//	for(int i = 0;i<n;i++){
//		for(int j = 0;j<=i;j++){
//			cin>>e;
//			a[i][j] = e;
//		}
//	} 

	int ans = dfs(0,0);
	printf("最大路径为；%d\n",ans);
	
	return 0;
} 
