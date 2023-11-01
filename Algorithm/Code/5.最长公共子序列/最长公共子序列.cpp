//最长公共子序列
#include<iostream>
#include<string>
using namespace std; 
int f[101][101]; //状态数组



int DP(string t1,string t2){
	for(int i = 1;i<=t1.size();i++){
		for(int j = 1;j <= t2.size();j++){
			if(t1[i - 1] == t2[j - 1]) f[i][j] = f[i - 1][j - 1] + 1;
			else
				f[i][j] = max(f[i][j - 1],f[i - 1][j]);
		}
	}
	return f[t1.size()][t2.size()];
}



int main(){
	string text1 = "ADABEC";
	string text2 = "DBDCA";
	int ans = DP(text1,text2);
	printf("最长公共子序列为：%d\n",ans);
	return 0;
} 
