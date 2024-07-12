package Other;
import java.util.ArrayList;
public class forEach {
    public static void main(String[] args) {
        String[] animalList = {"cat","dog","elephant","giraffe"};
        ArrayList<String> animals = new ArrayList<String>();
        animals.add("bird");
        for(String i : animalList){
            animals.add(i);
        }
        for(String i : animals){
            System.out.println(i);
        }
        System.out.println(animals);
    }
}
