#转义字符
#使用 \r 实现百分比进度
import time

for i in range(101):
    print("\r{:3}%".format(i),end=' ')
    time.sleep(0.05)

#字符串格式化 
#字符串中插入值
print ("\n")
print ("我叫 %s 今年 %d 岁！" % ('小明', 10))
print (f"我叫 {"小明"} 今年 {10} 岁！")