

public class Employee {
    String name;
    int age;
    String designation;
    double salary;
    
    //Employee类的构造器，构造方法
    public Employee(String name) 
    {
        this.name = name;
    }

    //设置age的值
    public void emAge(int emAge) 
    {
        age = emAge;
    }

    //设置designation的值
    public void emDesignation(String emDesig)
    {
        designation = emDesig;
    }

    //设置salary的值
    public void emSalary(double emSalary)
    {
        salary = emSalary;
    }

    //打印信息
    public void printEmployee()
    {
        System.out.printf("名字：%s \n", name);
        System.out.printf("年龄：%d \n", age);
        System.out.printf("职位：%s \n", designation);
        System.out.printf("薪水：%.2f \n", salary);
    }
}
