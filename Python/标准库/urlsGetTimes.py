#使用urllib.request的urlopen函数获取在线时间

from urllib.request import urlopen

for line in urlopen('http://tycho.usno.navy.mil/cgi-bin/timer.pl'):
    line = line.decode('utf-8') #将二进制数据解码为文本
    if 'EST' in line or 'EDT' in line:
        print(line)