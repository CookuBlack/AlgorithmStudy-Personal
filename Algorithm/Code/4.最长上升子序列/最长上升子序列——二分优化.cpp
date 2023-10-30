//最长上升子序列——二分优化 
#include<iostream>
using namespace std;

int n = 9;
int a[101] = {0,5,7,1,9,4,6,2,8,3};
int b[101]; //记录上升子序列
int len; 	//上升子序列的长度 

int find(int x){
	int L = 1,R = len,mid;
	while(L <= R){
		mid = (L + R) / 2;
		if(x>b[mid]) L = mid + 1;
		else R = mid - 1;
	} 
	return L;
}

int main(){
	int i,j;
	len = 1;
	b[1] = a[1];	//定义边界条件
	//动态更新b数组
	for(i = 2;i<=n;i++){
		if(a[i] > b[len]) b[++len] = a[i];
		else{
			j = find(a[i]);
			b[j] = a[i];
		}
	} 
	printf("最长上升子序列为：%d \n",len);
	return 0;
} 
