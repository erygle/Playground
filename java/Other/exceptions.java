package Other;
import java.util.InputMismatchException;
import java.util.Scanner;
public class exceptions {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        try{
            System.out.print("Enter first number to divide : ");
            int num1 = scanner.nextInt();
            System.out.print("Enter second number to divide by : ");
            int num2 = scanner.nextInt();
            int result = num1 / num2;
            System.out.println("Result : "+result);
        }
        catch(ArithmeticException a){
            System.out.println("You cant divide by zero.");
        }
        catch(InputMismatchException a){
            System.out.println("Enter a number.");
        }
        catch(Exception e){
            System.out.println("Invalid value.");
        }
        finally{
            scanner.close();
            System.out.println("Ending...");
        }
    
    }
}
