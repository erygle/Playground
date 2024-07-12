package OOP.Polymorphism;

import OOP.Encapsulation.main;

public class VehicleMain {
    public static void main(String[] args) {
        Car car = new Car();
        Bicycle bicycle = new Bicycle();
        Boat boat = new Boat();

        Vehicle[] vehicles = {car,bicycle,boat};
        
        for(Vehicle x : vehicles){
            x.go();
        }

    }
}
