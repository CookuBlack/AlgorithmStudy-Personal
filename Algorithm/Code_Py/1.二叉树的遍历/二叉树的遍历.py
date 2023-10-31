'''
二叉树的遍历:
  1.先序遍历
  2.中序遍历
  3.后序遍历
'''

import numpy as np
#使用数组模拟完全二叉树
#定义全局变量
n = 0
#1.创建空的数组
tree = np.zeros(1)

#先序遍历
def PreOrder(m):
    if m <= n:
        print(tree[m],end=" ")
        PreOrder(2*m)
        PreOrder(2*m+1)

#中序遍历
def InOrder(m):
    if m <= n:
        InOrder(2*m)
        print(tree[m],end=" ")
        InOrder(2*m+1)

#后序遍历
def PostOrder(m):
    if m <= n:
        PostOrder(2*m)
        PostOrder(2*m+1)
        print(tree[m],end=" ")






if __name__ == '__main__':
    n = int(input("请输入二叉树的结点个数"))
    for i in range(n):
        e = int(input("请对二叉树的结点进行赋值"))
        tree = np.append(tree,e)
    


    print("前序遍历")
    PreOrder(1)
    print("")
    print("中序遍历")
    InOrder(1)
    print("")
    print("后序遍历")
    PostOrder(1)