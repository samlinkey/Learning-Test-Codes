#推导式  一种独特的数据处理方式，可以从一个数据序列构建另一个新的数据序列的结构体
#过滤掉长度小于或等于3的字符串列表，并将剩下的转换成大写字母
names = ['Bob','Tom','alice','Jerry','Wendy','Smith']
newNames = [name.upper()for name in names if len(name)>3]
print(newNames)