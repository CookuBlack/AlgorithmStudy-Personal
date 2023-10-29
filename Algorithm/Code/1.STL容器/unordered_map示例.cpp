//unordered_map 无序哈希表
#include<iostream>
#include<unordered_map>
using namespace std;
//创建无序哈希表 
unordered_map<string,int> h;

int main(){
	int n,c;
	string str;
	cin>>n;
	while(n--){
		cin>>c>>str;
		//如果c == 1 哈希表中对应的位置加一 
		if(c == 1) h[str]++;
		else{
			//如果哈希表中某个字符串的添加次数不为0，输出次数 
			if(h.count(str))
				printf("%d\n",h[str]);
			//否则输出No 
			else
				puts("N0");
		}
	}	
	return 0;
} 
