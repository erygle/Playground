package OOP.Encapsulation;

public class Car {
    private String brand;
    private String model;
    private int year;
    Car(String brand, String model, int year){
        //this.brand = brand;
        setBrand(brand);
        //this.model = model;
        setModel(model);
        //this.year = year;
        setYear(year);
    }
    Car(Car car){
        this.copy(car);
    }
    /*public String toString(){
        return this.brand + " " + this.model + " " + this.year;
    }*/
    public String getBrand(){
        return brand;
    }
    public String getModel(){
        return model;
    }
    public int getYear(){
        return year;
    }
    public void setBrand(String brand){
        this.brand = brand;
    }
    public void setModel(String model){
        this.model = model;
    }
    public void setYear(int year){
        this.year = year;
    }
    public void copy(Car car){
        this.setBrand(car.getBrand());
        this.setModel(car.getModel());
        this.setYear(car.getYear());
        /*this.brand = car.brand;
        this.model = car.model;
        this.year = car.year;*/
    }
}
