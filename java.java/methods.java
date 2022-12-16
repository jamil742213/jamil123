

public class methods {
    static void multi(int n){
        for(int i= 1; i<=10; i++){
            System.out.format("[%d] X [%d] = %d \n", n, i, n*i);
        }
    }

    static void pattern1(int n){
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    
    public static void main(String[] args) {
        int x =7;

        multi(x);
        pattern1(x);
}
}