#猜字谜游戏

number = 7
guess = 1

print("猜字谜游戏！")

while guess != number:

    guess = int(input("请输入一个十以内数字："))

    if guess == number:
        print("回答正确")
    elif guess > number:
        print("大了")
    elif guess < number:
        print("小了")