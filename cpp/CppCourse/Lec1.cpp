#include<iostream>  //Cpp temel kütüphanesi.
//#include<stdio.h>  //C temel kütüphanesi.
using namespace std; // using namespace std; ifadesi, std adındaki C++ Standard Library'nin içeriğini kullanmamızı sağlar.
// ('std::') eğer using namespace std; ifadesini kullanmazsak bu şekilde kütüphane içinden bi fonksiyon kullanabiliriz.(std::cout gibi).

#define PI 3.14; // bu şekilde önişlemci komutu veya sabit değerleri tanımlarız.

//Değişkenler ve Veri Tipleri , GİRİŞ VE ÇIKIŞ ;

/*int main(){
    int a;  // Bellekte(ram içinde) 4 byte yer kaplar.
    //int x(10);
    float f; //4 byte yer kaplar.
    long long l; //8 byte yer kaplar.
    double d; //8 byte yer kaplar.
    char c; // 1 byte yer kaplar.
    //EXAMPLE: (çember alan hesabı)
    cout << "enter number:" << endl;
    cin  >> a; 
    cout << endl;  // C dilinde \n şeklinde yapılırken C++ dilinde bu şekilde bi alt satıra geçme olayı yapılır.
    cout << (a* a) * PI ; 

return 0;}*/


/*Operatörler, Koşullu İfadeler, Döngüler:*/
    
    int main() {
    int num1, num2;
    //cout << "Enter two numbers: ";
    //cin >> num1 >> num2;

    // Aritmetik operatörler

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    double division = num1/ static_cast<double>(num2); // static_cast<double> operatörü bir veri tipini başka veri tipi dönüştürmeye yarar.
                                                        //burada int değeri int değere böldüğümüzde kesirli bir sonuç gelebilceği için bu 
                                                        //şekilde double'a çevirme işlemi yapılmıştır.
    /*cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << division << endl;*/


    // Koşullu ifadeler
    /*if (sum > 10) {
        cout << "Sum is greater than 10." << endl<<"Your sum is "<<sum<<endl;
    } else if (sum == 10) {
        cout << "Sum is equal to 10." << endl<<"Your sum is "<<sum<<endl;
    } else {
        cout << "Sum is less than 10." << endl<<"Your sum is "<<sum<<endl;
    }*/

    //Döngüler
    /*int i = 1;
    cout << "Counting from 1 to 5 using a while loop:" << endl;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;*/

    /*cout << "Counting from 1 to 5 using a for loop:" << endl;
    for (int j = 0; j < 5; j++) {
        cout << j+1 << " ";
    }

    cout<< endl;*/

    cout << "Counting from 1 to 5 using a do-while loop:" << endl;
    int k = 1;
    do{
        cout << k << " ";
        k++;
    } while (k < 1);
    cout << endl<<k<<endl;
    system("exit");
    //return 0;
}


