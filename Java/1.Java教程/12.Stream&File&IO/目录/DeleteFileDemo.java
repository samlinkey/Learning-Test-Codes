import java.io.File;

public class DeleteFileDemo {
    public static void main(String[] args) {
        File folder = new File("/test/java/");
        deleteFolder(folder);
    }

    //删除文件以及目录
    public static void deleteFolder(File folder) {
        File[] files = folder.listFiles();
        if (files != null) {
            for(File f : files) {
                if (f.isDirectory()) {
                    deleteFolder(f);
                } else {
                    f.delete();
                }
            }
        }
        folder.delete();
    }
}
