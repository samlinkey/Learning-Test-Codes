#文件

#打开一个文件
f = open("输入输出/test.txt","w")

f.write("向文件内写入了一段内容\n")

#关闭打开的文件
f.close()

#打开一个文件
f = open("输入输出/test.txt","r")

str = f.read()
print(str)

#关闭打开的文件
f.close()