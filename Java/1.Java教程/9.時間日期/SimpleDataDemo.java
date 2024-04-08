import  java.util.*;
import java.text.*;

import javax.xml.crypto.Data;

public class SimpleDataDemo {
    public static void main(String[] args) {
        Date dNow = new Date( );
        SimpleDateFormat ft = new SimpleDateFormat ("yyyy-MM-dd hh:mm:ss");
   
        System.out.println("当前时间为: " + ft.format(dNow));
    }
}
