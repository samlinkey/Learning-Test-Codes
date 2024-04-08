public class TestArray2 {
    public static void main(String[] args) {
        double[] myList = {1.9, 2.9, 3.4, 3.5 };

        //打印所有數組
        for (int i = 0; i < myList.length; i++)
        {
            System.out.println(myList[i] + "");
        }
        //計算所有元素的總和
        double total = 0;
        for (int i =0; i < myList.length; i++)
        {
            total += myList[i];
        }
        System.out.println("Total is " + total);
        //查找最大元素
        double max = 0;
        for (int i = 0; i < myList.length; i++)
        {
            if(myList[i] > max) max = myList[i];
        }
        System.out.println("Max is " + max);
    }
}
