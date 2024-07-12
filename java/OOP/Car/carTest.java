package OOP.Car;

//import OOP.*;
public class carTest {
    public static void main(String[] args) {
        car myCar = new car();
        garage grg = new garage();
        myCar.brand = "Toyota";
        myCar.model = "Corolla";
        myCar.year = 2022;
        myCar.price = 1300000.00;
        myCar.drive();
        myCar.brake();
        System.out.println(myCar);
        System.out.println(myCar.toString());
        grg.park(myCar);
    }    
}
