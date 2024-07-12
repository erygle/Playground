package Other;
import java.util.Random;
import java.util.Scanner;
public class randomNumber {
    public static void main(String[] args) {
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);

        int randomNumber = random.nextInt(20);
        int guessNumber;

        while(true){
            System.out.println("Enter your guess : ");
            guessNumber = scanner.nextInt();
            if(guessNumber < randomNumber){
                System.out.println("Random is greater.");
                //guessNumber = scanner.nextInt();
            }
            else if(guessNumber == randomNumber){
                System.out.println("You Win.");
                break;
            }
            else{
                System.out.println("Guess is greater.");
                //guessNumber = scanner.nextInt();
            }
        }
    }
}
