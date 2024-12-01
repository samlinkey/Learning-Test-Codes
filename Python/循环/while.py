#使用while计算1到100的和
n = 100
sum = 0
counter = 1

while counter <= 100:
    sum = sum + counter
    counter += 1

print ("1 到 %d 以内的和是: %d" % (n, sum))