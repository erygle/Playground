package OOP.Interface;

public class Fish implements Prey,Preadator{
    public void hunt(){
        System.out.println("The fish is fleeing");
    }
    public void flee(){
        System.out.println("The fish is hunting");
    }
}
