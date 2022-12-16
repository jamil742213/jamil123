
class A extends Thread{
    public void run(){
        System.out.println("Thread Started  A ");
        for (int i= 1; i<5; i++){
            System.out.println("From Thread A : i = "+ i);
        }
        System.out.println("Exit From Thread A");
    }
}
class B extends Thread{
    public void run(){
        System.out.println("Thread Started  B ");
        for (int j= 1; j<5; j++){
            System.out.println("From Thread B : j = "+ j);
        }
        System.out.println("Exit From Thread B");
    }
}
class C extends Thread{
    public void run(){
        System.out.println("Thread Started C");
        for (int k= 1; k<5; k++){
            System.out.println("From Thread C : k = "+ k);
        }
        System.out.println("Exit From Thread C");
    }
}



public class PriorityThread {
    public static void main(String[] args) {

        A threadA = new A();
        B threadB = new B();
        C threadC = new C(); 
        
        threadC.setPriority(Thread.MAX_PRIORITY);
        threadB.setPriority(threadA.getPriority()+1);
        threadB.setPriority(Thread.MIN_PRIORITY);

        System.out.println("Start Thread A ");
        threadA.start();

        System.out.println("Start Thread B");
        threadB.start();


        System.out.println("Start Thread C ");
        threadC.start();


        System.out.println("-----------------End of main Thread-------------");
    }
}
