
//instanceof运算符 如果运算符左侧变量所指的对象，是操作符右侧类或接口(class/interface)的一个对象，那么结果为真。
class Vehicle 
{

}

public class Car extends Vehicle
{
    public static void main(String[] args)
    {
        Vehicle a = new Car();
        boolean result = a instanceof Car;
        System.out.println(result);
    }
}


