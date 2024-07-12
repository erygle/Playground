package Other;
import java.util.ArrayList;
//import java.util.*;

public class arrayList {
    public static void main(String[] args) {

        ArrayList<ArrayList<String>> groceryList = new ArrayList<>();
        
        ArrayList<String> fruitList = new ArrayList<String>();
        fruitList.add("apple");
        fruitList.add("blueberry");
        fruitList.add("melon");

        fruitList.set(1,"pizza");
        fruitList.add(3, "blueberry");
        /*for(int x=0; x<fruitList.size(); x++){
            System.out.println(fruitList.get(x));
        }*/
        
        ArrayList<String> bakeryList = new ArrayList<>();
        bakeryList.add("pasta");
        bakeryList.add("donut");
        bakeryList.add("bread");
        ArrayList<String> produceList = new ArrayList<>();
        produceList.add("cucumber");
        produceList.add("garlic");
        produceList.add("tomato");
        ArrayList<String> drinkList = new ArrayList<String>();
        drinkList.add("soda");
        drinkList.add("tea");
        drinkList.add("coffee");
        
        groceryList.add(fruitList);
        groceryList.add(bakeryList);
        groceryList.add(produceList);
        groceryList.add(drinkList);
        
        System.out.println(fruitList);
        System.out.println(bakeryList);
        System.out.println(produceList);
        System.out.println(drinkList);
        System.out.println(groceryList);
    }
}
