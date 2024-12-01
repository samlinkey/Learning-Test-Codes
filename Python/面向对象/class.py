#类

class people:
    #类的属性
    name = ''
    age = ''

    #私有属性
    _weight = 0

    #构造方法
    def __init__(self, n, a, w):
        self.name = n
        self.age = a
        self._weight = w
    def speak(self):
        print("%s 说：我 %d 岁。" % (self.name, self.age))

#继承类
class students(people):
    grade = ''
    def __init__(self, n, a, w, g):
        #调用父类的构造函数
        people.__init__(self, n, a, w)
        self.grade = g
    #覆写父类的方法
    def speak(self):
        print("%s 说：我 %d 岁, %d 年级。" % (self.name, self.age, self.grade))
    


#实例化类
s= students('runoob', 10, 30, 3)
s.speak()