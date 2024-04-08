
/*
    以下实例定义了一个 AppConfig 类，其中包含了三个静态变量 APP_NAME、APP_VERSION 和 DATABASE_URL，用于存储应用程序的名称、版本和数据库连接URL。这些变量都被声明为 final，表示它们是不可修改的常量。
    在 main() 方法中，我们打印出了这些静态变量的值。
 */

public class AppConfig {
    public static final String APP_NAME = "MyApp";
    public static final String APP_VERSION = "1.0.0";
    public static final String DATABASE_URL = "jdbc:mysql://localhost:3306/mydb";

    public static void main(String[] args)
    {
        System.out.printf("Application name: %s \n", AppConfig.APP_NAME);
        System.out.printf("Application version: %s \n", AppConfig.APP_VERSION);
        System.out.printf("Database URL: %s \n", AppConfig.DATABASE_URL);
    }
}
