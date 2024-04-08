import java.io.*;

public class ExcepTest {
    public static void main(String[] args) {
        int a[] = new  int[2];
        try {
            System.out.println("Access element three :" + a[3]);
        } catch(ArrayIndexOutOfBoundsException e) {
            System.out.println("Exception thrown :" + e);
        }
        //无论是否发生异常，finally代码块中的代码总会被执行
        finally {
            a[0] = 6;
            System.out.println("First element value:" + a[0]);
            System.out.println("The finally statement is executed");
        }
        System.out.println("Out of the block");
    }
}
