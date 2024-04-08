class SuperClass {
    private int n;
    SuperClass() {
        System.out.println("SuperClass()");
    }
    SuperClass(int n) {
        System.out.println("SuperClass(int n)");
        this.n = n;
    }
}

//Subclass 继承类
class SubClass extends SuperClass {
    private int n;
    SubClass() {
        //自动调用父类的无参构造器
        System.out.println("SubClass()");
    }
    SubClass(int n) {
        //调用父类中带有参数的构造器
        super(300);
        System.out.println("SubClass(int n)" + n);
        this.n = n;
    }
}

//SubClass2继承类
class SubClass2 extends SuperClass {
    private int n;
    SubClass2() {
        //调用父类中带有参数的构造器
        super(300);
        System.out.println("SubClass2()");
    }
    SubClass2(int n) {
        //自动调用父类无参数的构造器
        System.out.println("SubClass2(int n)" + n);
        this.n = n;
    }
}

public class TestSuperSub {
    public static void main(String[] args) {
        System.out.println("------SubClass 继承类------");
        SubClass sc1 = new SubClass();
        SubClass sc2 = new SubClass(100);
        System.out.println("------SubClass2 继承类------");
        SubClass2 sc3 = new SubClass2();
        SubClass2 sc4 = new SubClass2(200);
    }
}
