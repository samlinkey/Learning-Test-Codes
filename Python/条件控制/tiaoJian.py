#条件控制 if语句

age = int(input("请输入你的年龄："))
print("")

if age <= 0:
    print("不可能")
elif age <= 10:
    print("你好小朋友")
elif age > 10 and age <= 20:
    print("小青年")
else:
    print("老东西")

input("点击 enter 键退出")