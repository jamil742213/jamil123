class test implements Runnable{
    public void run(){
        System.out.println("Another Thread");
        // Thread.currentThread().setName("Raihana my liove ");
        System.out.println("is : "+Thread.currentThread().getName());
    }
}
class test1 implements Runnable{
    public void run(){
        System.out.println("Another Thread");
        // Thread.currentThread().setName("Raihana my liove ");
        System.out.println("is : "+Thread.currentThread().getName());
    }
}
class test2 implements Runnable{
    public void run(){
        System.out.println("Another Thread");
        // Thread.currentThread().setName("Raihana my liove ");
        System.out.println("is : "+Thread.currentThread().getName());
    }
}

public class threadget {
    public static void main(String[] args) {
        System.out.println("MAin Thread in main priogram");
        System.out.println(Thread.currentThread().getName());
        Thread.currentThread().setName("jamiul");
        System.out.println(Thread.currentThread().getName());

        test T = new test();
        Thread Th = new Thread(T);
        Th.start();
        // Th.run();

        test1 t1 =new test1();
        Thread th1 = new Thread(t1);
        th1.start();
        
        test2 t2 =new test2();
        Thread th2 = new Thread(t2);
        th2.start();


    }
    
}
