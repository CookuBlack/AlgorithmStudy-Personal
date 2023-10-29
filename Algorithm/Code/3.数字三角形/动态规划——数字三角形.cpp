//动态规划——数字三角形
#include<iostream>
using namespace std;


int n = 4;
int a[9][9] = {{1},
				{4,6},
				{8,3,9},
				{5,7,2,1}};  
int main(){
	int x,y;
    //向上逐层累加
    for(x = n - 2;x>=0;x--){  //从倒数第二行开始向上进行累加
		for(y = 0;y<=x;y++){
			a[x][y] = max(a[x + 1][y] , a[x + 1][ y + 1]) + a[x][y] ;
        }
    }
    //输出数塔最大值
    cout<<"max = "<<a[0][0]<<endl;
    return 0;
}
