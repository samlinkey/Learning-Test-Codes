public class Test2 {
    public static void main(String[] args) {
        Color[] arr = Color.values();

        for (Color col: arr) {
            // ordinal()方法返回枚举的索引值
            System.out.println(col + " at index " + col.ordinal());
        }

        // 使用 valueOf() 返回枚举常量， 不存在的会报错 IllegalArgumentException
        System.out.println(Color.valueOf("RED"));
    }
}
