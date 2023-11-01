//最长公共子序列，记录公共子序列元素
#include<iostream>
using namespace std; 

char s[200];	//记录公共子序列 
int p[101][101];		//记录位移 
int f[101][101]; 	//记录状态 
int DP(char t1[],char t2[],int m,int n){
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			if(t1[i - 1] == t2[j - 1]){
				f[i][j] = f[i - 1][j - 1] + 1;
				p[i][j] = 1;	//表示向右下走了一步,回溯到左上方 
			}
			else if(f[i][j - 1]> f[i - 1][j]){
				f[i][j] = f[i][j -1];
				p[i][j] = 2; 	//表示向右走了一步，回溯到左方 
			} 
			else{
				f[i][j] = f[i - 1][j];
				p[i][j] = 3;	//表示向下走了一步，回溯到上方 
			} 
		}
	}
	return f[m][n]; 
}




int main(){
	char text1[] = "ADABEC";
	char text2[] = "DBDCA";
	int m,n;
	m = sizeof(text1)/sizeof(char) - 1;
	n = sizeof(text2)/sizeof(text2[0]) - 1;
	int answer = DP(text1,text2,m,n);
	cout<<"最长公共子序列的长度为："<<answer<<endl;
	
	//输出子序列的元素
	int i = m;
	int j = n;
	int k = f[m][n];
	while(i > 0&&j > 0){
		if(p[i][j] == 1){  //左上方行走 
			s[k--] = text1[i - 1];
			i--;
			j--;
		}else if(p[i][j] == 2){  //左行走 
			j--; 
		}else		//向上行走 
			i--;
	} 
	
	printf("最长公共子序列为："); 
	for(int i = 1;i<=f[m][n];i++){
		printf("%c",s[i]);
	} 
	
	return 0;
}
