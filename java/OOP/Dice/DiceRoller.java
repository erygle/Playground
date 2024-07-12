package OOP.Dice;
import java.util.Random;

public class DiceRoller {
    /*int number;
    Random random;*/
    DiceRoller(){
        Random random = new Random();
        int number = 0;
        roll(number,random);
    }
    void roll(int number, Random random){
        number = random.nextInt(6)+1;
        System.out.println("number : "+number);
    }
}
