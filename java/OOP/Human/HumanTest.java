package OOP.Human;

public class HumanTest {
    public static void main(String[] args) {
        Human human = new Human("eray", 19, 80.3);
        System.out.println(human.name);
        System.out.println(human.age);
        System.out.println(human.weight);
        System.out.println(human);
        System.out.println(human.toString());
        human.eat();
    }    
}
