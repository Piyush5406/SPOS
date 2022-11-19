import java.io.*;
import java.util.*;

public class B1{
    static{
        System.loadLibrary("B1");
    }
    private native int add(int a,int b);
    private native int sub(int a,int b);
    private native int mul(int a,int b);
    private native int div(int a,int b);

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a,b;
        System.out.println("Enter value for a : ");
        a = sc.nextInt();
        System.out.println("Enter value for b :");
        b = sc.nextInt();

        new B1().add(a,b);
        new B1().sub(a,b);
        new B1().mul(a,b);
        new B1().div(a,b);
    }
}
