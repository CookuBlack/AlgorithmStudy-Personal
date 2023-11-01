# 开发人：CooKu Black
import numpy as np


#原数据：
a = np.array([0,5,7,1,9,4,6,2,8,3]) #创建数组
#第一个值为空值，第一个数值只用于占位，为后面的元素的索引做铺垫
f = np.ones(len(a)) #初始值赋值为1表示每一个数值自身都表示一个最长上升子序列

def search():
    ans = 1
    # 动态更新f数组
    for i in range(2,len(a)):
        # print(i," *")
        for j in range(1,i):
            if a[i] > a[j] :
                f[i] = max(f[i],f[j] + 1)
            ans = max(ans,f[i])
    print("最长上升子序列为：",ans,"\n")



if __name__ == '__main__':
    search()






