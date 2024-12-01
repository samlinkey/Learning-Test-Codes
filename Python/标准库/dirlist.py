import os

#获取当前工作目录
current_dir = os.getcwd()
print("当前工作目录为：", current_dir)

#列出当前目录下的文件
files = os.listdir(current_dir)
print("当前目录下的文件：",files)