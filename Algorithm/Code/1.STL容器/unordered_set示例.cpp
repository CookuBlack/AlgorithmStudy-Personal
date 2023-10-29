//unordered_set 示例
#include<iostream>
#include<unordered_set>  //头文件 
using namespace std;

//创建无序集合 
unordered_set<int> s;

int main(){
	int n,c,x;
	cin>>n;
	while(n--){
		cin>>c>>x;
		if(c == 1) s.insert(x);  //添加元素 
		else 
			s.count(x)?puts("Yes"):puts("No");  //如果元素存在输出yes否则输出no 
	} 
} 
