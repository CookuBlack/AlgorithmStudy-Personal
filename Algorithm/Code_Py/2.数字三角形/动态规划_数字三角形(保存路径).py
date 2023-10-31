# 开发人: Cooku Black
# 开发时间: 2023/10/30 18:37
# 动态规划——数字三角形(保留路径)
import sys

n = 4
a = [[1],
    [4, 6],
    [8, 3, 9],
    [5, 7, 2, 1]]
b = [[1],
    [4, 6],
    [8, 3, 9],
    [5, 7, 2, 1]]
p = [[0] * n for _ in range(n)]   #用于记录偏移量

# 备份数组，起点（0，0）
for x in range(n):
   for y in range(x + 1):
       b[x][y] = a[x][y]

# 向上逐层累加
for x in range(n - 2, -1, -1):
   for y in range(x + 1):
       if a[x + 1][y] > a[x + 1][y + 1]:
           a[x][y] += a[x + 1][y]
           p[x][y] = 0  # 向下
       else:
           a[x][y] += a[x + 1][y + 1]
           p[x][y] = 1  # 向右下

# 输出数塔最大值
print("最大路径的值为：", a[0][0])

# 输出路径
y = 0
path = []
for x in range(n):
   path.append((x, y))
   y += p[x][y]

print("最大路径为:", path)
