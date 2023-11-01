//编辑距离——优化空间复杂度
#include<iostream>
#include<string>
using namespace std;
int f[101];

int DP(string t1,string t2){
	int t_1,t_2;
	for(int j = 1;j<=t1.length();j++) f[j] = j;
	for(int i = 1;i<=t1.size();i++){
		t_1 = f[0]++;  //t1等价于f[i - 1][0]
		for(int j = 1;j<=t2.size();j++){
			t_2 = f[j];
			if(t1[i - 1] == t2[j - 1]){
				f[j] = t_1; 
			}else{
				f[j] = min(t_1,min(f[j - 1],f[j])) + 1;
			}
		t_1 = t_2;	//t1等价于f[i - 1][j - 1]
		}
	}	
	return f[t2.size()];
}





int main(){
	string text1 = "LOVER";
	string text2 = "ROTV";
	int answer = DP(text1,text2);
	cout<<"编辑距离为："<<answer<<endl;
	
	return 0;
} 
