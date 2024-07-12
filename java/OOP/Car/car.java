package OOP.Car;
import java.io.File;
public class car {
    
    String model;
    String brand;
    int year;
    double price;

    public String toString(){
        String myString = brand + " " + model + " " + year + " " + price;
        return myString;
    }

    void drive(){
        System.out.println("You drive the car.");
    }
    void brake(){
        System.out.println("You brake.");
    }
    
}
