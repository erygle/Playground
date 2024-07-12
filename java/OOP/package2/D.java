package OOP.package2;
import OOP.package1.*;

public class D extends A {
    
    public static void main(String[] args) {
        D d = new D();
        C c = new C();
        System.out.println(d.protectedMessage);
        System.out.println(c.protectedMessage);
        
    }    
}
