
/*
    以下实例中定义了一个 RunoobTest 类，其中包含了一个成员变量 instanceVar 和一个静态变量 staticVar。
    method() 方法中定义了一个参数变量 paramVar 和一个局部变量 localVar。在方法内部，我们将局部变量的值赋给成员变量，将参数变量的值赋给静态变量，然后打印出这些变量的值。
    在 main() 方法中，我们创建了一个 RunoobTest 对象，并调用了它的 method() 方法。
 */

public class RunoobTest {
    //成员变量
    private int instanceVar;
    //静态变量
    private static int staticVar;

    public void method(int paramVar)
    {
        //局部变量
        int localVar = 11;

        //赋值
        instanceVar = localVar;
        staticVar = paramVar;
        
        System.out.printf("成员变量：%d \n", instanceVar);
        System.out.printf("静态变量：%d \n", staticVar);
        System.out.printf("参数变量：%d \n", paramVar);
        System.out.printf("局部变量：%d \n", localVar);
    }

    public static void main(String[] arg)
    {
        RunoobTest a = new RunoobTest();
        a.method(22);
    }
}
