


public class DeamonThread extends Thread{
    public void run(){
        System.out.println("This is a simple Thread ");

        if (Thread.currentThread().isDaemon()){
            System.out.println("Deamon Thread");
        }
        else{
            System.out.println("child Thread ");
        }
    }
    public static void main(String[] args) {
        System.out.println("Main thread in  program");

        DeamonThread DT = new DeamonThread();
        DT.setDaemon(true);
        DT.start();


    }
}
