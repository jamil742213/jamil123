
class A extends Thread {
    public void run() {
        for (int i = 0; i <= 5; i++) {
            try {
                Thread.sleep(1000);
                System.out.println(i);
            } catch (Exception e) {
                System.out.println("'faild'" + e);
            }
        }
    }
}

public class MethodSleep {
    public static void main(String[] args) throws Exception{
        for (int i = 0; i < 10; i++) {
            try {

                Thread.sleep(1000);

            } 
            catch (Exception e) {
                System.out.println("invalid " + e);
                System.out.println(i);

            }

        }
        A threadA = new A();
        threadA.start();
    }

}