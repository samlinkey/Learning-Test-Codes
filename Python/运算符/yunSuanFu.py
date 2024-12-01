#成员运算符 
a = 10
b = 20

list = [1, 2, 3, 4, 5,]

if ( a in list ):
    print("1- 变量 a 在列表中")
else:
    print("1 - 变量 a 不在列表中")

if ( b not in list):
    print("2 - 变量 b 不在列表中")
else: 
    print("2 - 变量 b 在列表中")

#修改变量 a 的值
a = 2
if ( a in list ):
    print ("3 - 变量 a 在列表中")
else:
    print ("3 - 变量 a 不在列表中")
