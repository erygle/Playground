#include <iostream> 
using namespace std;

/*
1. Sınıflar ve Nesneler:


class Araba {
public:
    string marka;
    string model;
    int yil;
};
int main() {
    Araba araba1;
    araba1.marka = "Toyota";
    araba1.model = "Corolla";
    araba1.yil = 2022;

    cout << "Araba 1: " << araba1.marka << " " << araba1.model << " " << araba1.yil << endl;

    return 0;
}
*/


//--------------------------------------------------------------------

/*2. Constructor ve Destructor:


#include <iostream>
using namespace std;

class Araba {
public:
    Araba() {
        cout << "Araba olusturuldu." << endl;
    }

    ~Araba() {
        cout << "Araba yok edildi." << endl;
    }
};

int main() {
    Araba araba1; // Constructor çağrılır
    cout << "Program sonu." << endl; // Destructor çağrılır

    return 0;
}

*/
//--------------------------------------------------------------------------------------

/*3.KALITIM:


class TemelSinif {
public:
    void temelFonksiyon() {
        cout << "Temel sinif fonksiyonu" << endl;
    }
};

class TuretilmisSinif : public TemelSinif {
public:
    void turetilmisFonksiyon() {
        cout << "Turetilmis sinif fonksiyonu" << endl;
    }
};

int main() {
    TuretilmisSinif nesne;
    nesne.temelFonksiyon();
    nesne.turetilmisFonksiyon();

    return 0;
}
*/
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*
ÖRNEK1;  

class student{
    private:  
                        // eğer bilgileri private seçeneği ile tutarsak bu bilgilere veya
                        //değişkenlere ulaşım sadece class içindeki fonksiyonlar ile olur. 
    string name;
    int age; 
    int number;
    public: 
    
    void setname(string enteredname){   
        
        name = enteredname; 
    }
    void setage(int enteredage){
        age = enteredage;
    }
    void setnumber(int enterednumber){
        number = enterednumber;
    }
    void print_information(){
        cout<<name<<" "<< age << " " << number << endl; 
    }
};

int main(){
    student s1;
    s1.setname("Skylab");
    s1.setage(20);
    s1.setnumber(21562555);
    s1.print_information();
}
*/

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*ÖRNEK2;

class A{
    public:     // her yerden erişilebilir.
    int a;
};
class B{
    protected:  //ya D classına kalıtım yapıldığı için D den erişilir ya da kendi içinden erişim yapılabilir.
    int b;

};
class C{
    private:    // Sadece kendi içinden erişim sağlanır.
    int c;
    public:
    void setc(int girilcekc){
        c = girilcekc;
    }
    void getc(){
        cout << c << endl;
    }
};
class D:public A , public B , public C{
    public:
    D(){
        b=20;
    }
    void getb(){
        cout<< b << endl;
    }
};
int main(){
    D example;
    example.a = 10;
    cout << example.a << endl;
    example.getb();
    example.setc(30);
    example.getc();
}
*/
