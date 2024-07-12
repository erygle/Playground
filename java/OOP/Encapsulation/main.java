package OOP.Encapsulation;

public class main {
    public static void main(String[] args) {
        Car car = new Car("Volvo","S60",2014);
        Car car2 = new Car("Honda","Civic",2006);
        
        System.out.println(car);
        System.out.println(car2);
        System.out.println();
        
        /*car2 = car;
        System.out.println(car);
        System.out.println(car2);
        System.out.println();*/
        
        car2.copy(car);
        System.out.println(car);
        System.out.println(car2);
        System.out.println();
        
        /*Car car2 = new Car(car);
        System.out.println(car);
        System.out.println(car2);
        System.out.println();*/
        
        car.setModel("S90");

        System.out.println(car.getBrand());
        System.out.println(car.getModel());
        System.out.println(car.getYear());
        
        System.out.println();
        
        System.out.println(car2.getBrand());
        System.out.println(car2.getModel());
        System.out.println(car2.getYear());
        
        
        
        //System.out.println(car.toString());
        /*System.out.println(car.getBrand());
        System.out.println(car.getModel());
        System.out.println(car.getYear());
        
        car.setModel("S90");
        System.out.println(car.getModel());*/
    }    
}
