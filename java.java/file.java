import java.io.FileReader;
import java.io.IOException;

public class file {
    public static void main(String[] args) {
        try{
            FileReader r= new FileReader("test.txt");
            try {
                int i;
                while((i=r.read())!= -1){
                    System.out.print("");
                    System.out.print((char)i);
                }
            }
            finally{
                r.close();
                System.out.print("File Closed!....");
                System.out.println("");
                System.out.println("");
            }

        }
        catch(IOException e)
        {
                System.out.println("Exception Handle :"+e);
        }
    }
}
