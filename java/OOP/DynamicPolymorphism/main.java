package OOP.DynamicPolymorphism;
import java.util.Scanner;
public class main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Animal animal = new Animal();
        System.out.print("Which animal do you want (1:Cat , 2:Dog) : ");
        int choice = scanner.nextInt();
        if(choice == 1){
            animal = new Cat();
            animal.speak();
        }
        else if(choice == 2){
            animal = new Dog();
            animal.speak();
        }
        else{
            animal.speak();
        }
        scanner.close();
    }
}
