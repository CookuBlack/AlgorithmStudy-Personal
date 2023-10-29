//动态规划——数字三角形(保留路径)
#include<iostream>
using namespace std;


int n = 4;
int a[9][9] = {{1},
				{4,6},
				{8,3,9},
				{5,7,2,1}};  
int b[9][9]; //用于备份
int p[9][9]; //记录路径
int main(){
	int x,y;
    //备份数组，起点（0，0）
    for(x = 0;x < n;x++)
        for(y = 0;y <= x; y++)
            b[x][y] = a[x][y];
    //向上逐层累加
    for(x = n - 2;x >= 0;x--)
        for(y = 0;y <= x;y++)
            if(a[x + 1][y] > a[x + 1][y + 1]){
				a[x][y] += a[x+1][y];
                p[x][y] = 0;	//向下
            }else{
                a[x][y] += a[x + 1][y + 1];
                p[x][y] = 1;  //向右下    相当于记录y的增量，即是否向右移动了。
            }
    //输出数塔最大值
    cout<<"max = "<<a[0][0]<<endl;
	for(x = 0,y = 0;x<n - 1;x++){
		cout<<b[x][y]<<"->";
        y = y + p[x][y];	//下一行的列数
    }
	cout<<b[n-1][y];   //避免 "->" 多余的输出 
	return 0;
}
