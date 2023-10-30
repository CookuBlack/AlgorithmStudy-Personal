//最长上升子序列——动态规划 
#include<iostream>
using namespace std;

int n = 9;
int a[101] = {0,5,7,1,9,4,6,2,8,3};
int f[101];    //DP数组 

int main(){
	int ans = 1;
	//初始化f[i]
	for(int i = 1;i <= n;i++){
		f[i] = 1;
	}
	//动态更新f[i]
	for(int i = 2;i <= n;i++){
		for(int j = 1;j<i;j++){
			if(a[i] > a[j]){
				f[i] = max(f[i],f[j] + 1);  //更新此时的最大子序列 
			}
			ans = max(ans,f[i]);	//记录最大的子序列 
		}
	} 
	//输出最长上升子序列 
	printf("最长上升子序列为：%d\n",ans);
	return 0;
} 
