import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class fil_copy {
    /* (non-Javadoc)
     * @see java.lang.Object#clone()
     */
    
    @Override
    protected Object clone() throws CloneNotSupportedException {
        // TODO Auto-generated method stub
        return super.clone();
    }
    public static void main(String[] args) throws IOException {

        FileInputStream  r = new FileInputStream("jam.txt");
        FileOutputStream w = new FileOutputStream("raihana.txt");

        int i;
        while((i=r.read())!=-1){
            w.write((char)i);
        }
        System.out.println("FILE_COPIED_SUCCESSFULLY");
    }
}
