public class Animal {

    private String name;
    private int id;

    public Animal(String myName, int myId) {
        this.name = myName;
        this.id = myId;
    }

    public void eat() {
        System.out.println("正在吃");
    }

    public void sleep() {
        System.out.println("正在睡");
    }

    public void introduction() {
        System.out.printf("大家好！我是 %d号 %s",id, name);
    }
}
