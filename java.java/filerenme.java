import java.io.File;

public class filerenme {
    public static void main(String[] args) {
        File r = new File("test.txt");
        File f = new File("test1.txt");
        if (f.exists()) {
            System.out.println(f.renameTo(r));
        } else {
            System.out.println("File Doesn't exists");
        }
    }
}
