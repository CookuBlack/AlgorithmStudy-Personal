/*二叉树的遍历*/ 
/*1.先序遍历
  2.中序遍历
  3.后序遍历*/ 
#include<iostream>
#include<vector>
using namespace std;


//创建二叉树(使用数组进行模拟完全二叉树)  数组只可以模拟完全二叉树与其特殊的形态(满二叉树) 

vector<int> tree(1,0);  //创建长度为1的向量，并将其值设置为1，这样相当于直接将向量中的第一个值设置为0 
int n;

//先序遍历
void PreOrder(int m){
	if(m <= n){
		cout<<tree[m]<<"\t";
		PreOrder(2*m);
		PreOrder(2*m+1);
	}
}

//中序遍历
void InOrder(int m){
	if(m<=n){
		InOrder(2*m);
		cout<<tree[m]<<"\t";
		InOrder(2*m+1);
	}
}

void PostOrder(int m){
	if(m <= n){ //如果BT不为空
        PostOrder(2*m);    //递归调用左子树
        PostOrder(2*m+1);   //递归调用右子树
        printf("%d\t",tree[m]);   //访问节点
    }
}

int main(){
	int e;
	cin>>n;
//	tree.push_back(0);  //剔除0位置
	for(int i = 0;i<n;i++){
		//对完全二叉树进行赋值 
		cin>>e; 
		tree.push_back(e);
	}
	cout<<"前序遍历："<<endl; 
	PreOrder(1);
	puts("");
	cout<<"中序遍历："<<endl; 
	InOrder(1);
	puts(""); 
	cout<<"后序遍历："<<endl; 
	PostOrder(1);
	return 0;
} 
