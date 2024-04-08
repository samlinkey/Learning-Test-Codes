import java.io.File;

public class CreateDir {
    public static void main(String[] args) {
        String dirname = "C:\\Code\\Java\\12.Stream&File&IO\\\u76EE\u5F55\\test";
        File d = new File(dirname);
        //判断目录是否存在
        if (! d.exists()) {
            //创建目录
            boolean created = d.mkdirs();
            if (created) {
                System.out.println("目录创建成功:" + dirname);
            } else {
                System.out.println("无法创建目录:" + dirname);
            }
        } else {
            System.out.println("目录已存在:" + dirname);
        }
    }
}
