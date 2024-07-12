package Other;
import java.util.Scanner;
public class input {
    public static void main(String[] args) {
        Scanner Scan = new Scanner(System.in);
        String name;
        int Number;
        
        System.out.println("Enter Your Number : ");
        Number = Scan.nextInt();
        Scan.nextLine();
        System.out.println("Your number is " + Number);
        
        System.out.println("Enter Your Name : ");
        name = Scan.nextLine();
        System.out.println("Your name is "+ name);
    }
    
}
