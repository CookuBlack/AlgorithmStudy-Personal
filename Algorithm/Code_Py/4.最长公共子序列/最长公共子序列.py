#实现最长公共子序列

#导入相应的库
import numpy as np

#定义状态数组
f = np.zeros((101,101))

def DP(t1,t2):
    for i in range(1,len(t1)+1):
        for j in range(1,len(t2)+1):
            if t1[i-1] == t2[j-1]:
                f[i][j] = f[i-1][j-1] + 1
            else:
                f[i][j] = max(f[i-1][j],f[i][j-1])
    return f[len(t1)][len(t2)]



if __name__ == "__main__":
    text1 = "ADABEC"
    text2 = "DBDCA"
    answer = DP(text1,text2)
    print("最长公共子序列的长度为：",answer)

