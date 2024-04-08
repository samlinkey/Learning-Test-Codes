import java.io.*;

public class InsufficientFundsException extends Exception {
    //此处的amount用来储存当出现异常（取出钱多于余额时）所缺乏的钱
    private double needs;
    
    public  InsufficientFundsException(double needs) {
        this.needs = needs;
    }
    public double getAmount() {
        return needs;
    }
}