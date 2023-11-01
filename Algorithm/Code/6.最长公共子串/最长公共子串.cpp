//最长公共子串
#include<iostream>
#include<string>
using namespace std;
//定义各个状态的数组
int f[101][101];
int per = -1; //用于指向最长公共子串的最后一个元素 

int DP(string t1,string t2){
	int M_E = 0,MM = 0;
	for(int i = 1;i<=t1.size();i++){
		for(int j = 1;j<=t2.size();j++){
			if(t1[i-1] == t2[j-1]){
				f[i][j] = f[i-1][j-1] + 1;
				
				MM = max(M_E,f[i][j]);
				if(MM > M_E){
					M_E = MM;
					per = i-1;	//记录最长子串的最后一个元素 
				} 
			}else{
				f[i][j] = 0;
			}
		}
	}
	
	return M_E;
}
//输出最长子串
void pt(string t1,int len){
	int i = per,j = len;
//	while(j--){
//		cout<<t1[i]<<endl;
//		i--;
//	}
	for(int i = per - len + 1;i<=per;i++){
		cout<<t1[i]<<" ";
	}
} 
int main(){
	string text1 = "ABACCB";
	string text2 = "AACCAB";
	int answer = DP(text1,text2);
	cout<<"最长公共子串为："<<answer<<endl;
	pt(text1,answer);
	return 0;
} 
