//±à¼­¾àÀë
#include<iostream>
#include<string>
using namespace std;
int f[101][101];

int DP(string t1,string t2){
	//½øĞĞ¸³³õÖµ
	for(int i = 1;i<=t1.length();i++) f[i][0] = i; 
	for(int j = 1;j<=t2.length();j++) f[0][j] = j;
	
	for(int i = 1;i<=t1.size();i++){
		for(int j = 1;j<=t2.size();j++){
			if(t1[i - 1] == t2[j - 1]){
				f[i][j] = f[i-1][j-1]; 
			}else{
				f[i][j] = min(f[i - 1][j],min(f[i][j-1],f[i - 1][j - 1]))+1;
			}
		} 
	}	
	return f[t1.size()][t2.size()];
}





int main(){
	string text1 = "LOVER";
	string text2 = "ROTV";
	int answer = DP(text1,text2);
	cout<<"±à¼­¾àÀëÎª£º"<<answer<<endl;
	
	return 0;
} 
