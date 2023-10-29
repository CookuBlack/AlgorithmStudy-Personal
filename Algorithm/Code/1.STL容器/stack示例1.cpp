//stackÊ¾Àý 
#include<iostream>
#include<stack>
using namespace std; 
//´´½¨Õ»
stack<int> s;
int main(){
	int n,x;
	cin>>n;
	//Ñ¹Õ» 
	for(int i = 1;i<=n;i++){
		cin>>x;
		s.push(x);
	}
	
	while(s.size()){
		//È¡Õ»¶¥ 
		cout<<s.top()<<endl;
		//µ¯Õ» 
		s.pop();
	}
	
	return 0;
} 
