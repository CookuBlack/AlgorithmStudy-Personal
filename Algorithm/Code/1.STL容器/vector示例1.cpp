#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
//初始化容器 
vector<int> v;

int main(){
	int n,x;
	cin>>n;
	for(int i = 0 ;i < n;i++){
		cin>>x;
		//向容器中添加元素 
		v.push_back(x); 
	}
	//输出添加元素后的元素 
	for(int i = 0;i<v.size();i++) cout<<v[i]<<' ';
	puts("");
	//对容器进行升序排序并输出 
	sort(v.begin(),v.end());
	for(int e:v) cout<<e<<' ';
	puts("");
	//对容器进行反转并输出 
	reverse(v.begin(),v.end());
	for(int e :v) cout<<e<<' ';
	
	return 0;
}
