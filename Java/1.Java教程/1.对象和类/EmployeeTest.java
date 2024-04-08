
public class EmployeeTest {
    public static void main(String[] args)
    {
        //使用构造器创建两个对象
        Employee empOne = new Employee("RUNOOB1");
        Employee empTwo = new Employee("RUNOOB2");

        //调用这两个对象的成员方法
        empOne.emAge(26);
        empOne.emDesignation("高级程序员");
        empOne.emSalary(1000);
        empOne.printEmployee();

        System.out.printf("\n");

        empTwo.emAge(21);
        empTwo.emDesignation("菜鸟程序员");
        empTwo.emSalary(500);
        empTwo.printEmployee();

    }
}
