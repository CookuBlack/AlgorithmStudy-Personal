//完全背包
#include<iostream>
using namespace std;
#define N 51   //表示最大的物品数量 
#define M 210	//表示背包的最大容量 
int f[N][M]; 
int w[N],c[N];  //分别表示物品的价值与重量 


int DP(int n,int m){
	int i = 1,j = 1;
	for(i = 1;i<=n;i++){ 	//表示物品i 
		for(j = 1;j<= m;j++){ //表示背包容量j 
			if(j < w[i]) f[i][j] = f[i -1][j];
			else f[i][j] = max(f[i -1][j],f[i][j -w[i]] + c[i]);
		}
	}
	return f[n][m];
}


int main(){
	int n,m;
	int a,b,i = 1;
	cin>>n>>m;
	int temp_n = n;
	while(temp_n--){
		cin>>a>>b;
		w[i] = a;
		c[i++] = b;
	} 
	int answer = DP(n,m);
	cout<<"背包能放下的最大价值为："<<answer<<endl;
	
	return 0;
} 

/*
示例：
输入数据：
3 6
2 3
4 7
3 6
输出数据：
12 
*/
