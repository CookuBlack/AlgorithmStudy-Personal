//手动创建栈 
#include<iostream>
using namespace std;

int s[10000],top;

int main(){
	int n,x;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>x;
		s[++top] = x; //保证第 0 位的值为 0； 
	}
	while(top){
		cout<<s[top]<<'\n';
		top--;
	}
	return 0;
} 
