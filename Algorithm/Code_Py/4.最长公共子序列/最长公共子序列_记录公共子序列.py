#实现最长公共子序列

#导入相应的库
import numpy as np

#定义状态数组
f = np.zeros((101,101))
#记录位移的数组
t = np.zeros((101,101))
s = []

def DP(t1,t2):
    for i in range(1,len(t1)+1):
        for j in range(1,len(t2)+1):
            if t1[i-1] == t2[j-1]:
                f[i][j] = f[i-1][j-1] + 1
                t[i][j] = 1  #表示向右下走了一步
            elif f[i][j - 1] > f[i - 1][j]:
                f[i][j] = f[i][j - 1]
                t[i][j] = 2 #表示向右走了一步
            else:
                f[i][j] = f[i - 1][j]
                t[i][j] = 3   #表示向下走了一步
    return f[len(t1)][len(t2)]


def pt(t1,t2):
    i = len(t1)
    j = len(t2)
    k = f[i][j]
    while i > 0 and j > 0:
        if t[i][j] == 1:  #需要向左上方行走
            s.append(t1[i-1])
            i -= 1
            j -= 1
        elif t[i][j] == 2:  #向左行走
            j -= 1
        else:   #向上行走 
            i -= 1
    for i in range(len(s) - 1,-1,-1):
        print(s[i],end=' ')

if __name__ == "__main__":
    text1 = "ADABEC"
    text2 = "DBDCA"
    answer = DP(text1,text2)
    print("最长公共子序列的长度为：",answer)
    print("最长子序列为：")
    pt(text1,text2)

