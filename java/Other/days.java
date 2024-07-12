package Other;
import java.util.Scanner;
public class days {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int day;
        System.out.print("Enter day number : ");
        day = scanner.nextInt();
        
        switch (day) {
            case 1:
                System.out.println("It is Monday.");
                break;
            case 2:
                System.out.println("It is Tuesday.");
                break;
            case 3:
                System.out.println("It is Wednesday.");
                break;
            case 4:
                System.out.println("It is Thursday.");
                break;
            case 5:
                System.out.println("It is Friday.");
                break;
            case 6:
                System.out.println("It is Saturday.");
                break;
            case 7:
                System.out.println("It is Sunday.");
                break;
            default:
                System.out.print("Invalid value.");
                System.exit(0);
                break;
        }
    }
    
}
