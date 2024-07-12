package Other;
import java.util.Random;
public class random {
    public static void main(String[] args) {
        Random random = new Random();

        int x = random.nextInt(15);
        double y = random.nextDouble();

        System.out.println(x + " " + y);

    }
    
}
