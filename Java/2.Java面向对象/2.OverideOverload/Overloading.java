public class Overloading {
    public int test() {
        System.out.println("test1");
        return 1;
    }

    public void test(int a) {
        System.out.println("test2");
    }

    public String test(int a, String s) {
        System.out.println("test3");
        return "Returntest3";
    }
    
    public String test(String s,int a) {
        System.out.println("test4");
        return "Returntest4";
    }

    public static void main(String[] args) {
        Overloading o = new Overloading();
        System.out.println(o.test());
        o.test(1);
        System.out.println(o.test(1, "test"));
        System.out.println(o.test("test4", 1));
    }
    
}
