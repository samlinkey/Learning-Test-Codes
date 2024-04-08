import java.util.Scanner;

public class ScannerDemo2 {
    public static void main(String[] args) {
        //从键盘接收数据
        Scanner scan = new Scanner(System.in);

        int i = 0;
        float f = 0.0f;

        System.out.println("请输入整数：");
        //判断输入的是否为整数
        if (scan.hasNextInt()) {
            //接收整数
            i = scan.nextInt();
            System.out.println("整数数据：" + i);
        } else {
            System.out.println("输入的不是整数!");
        }

        System.out.println("输入小数：");
        //判断输入是否为小数
        if (scan.hasNextFloat()) {
            //接受小数
            f = scan.nextFloat();
            System.out.println("小数数据：" + f);
        } else {
            //输入错误信息
            System.out.println("输入的不是小数");
        }
        scan.close();
        
    }
    
}
