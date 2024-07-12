#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int kitap = 0;
    int gida = 1;
    int luks = 2;
    int urun;
    float fiyat; 
    cout<<"0-Kitap \n1-Gida \n2-Luks Esya \n";
    
    cout<<"Urun kodunu giriniz : ";
    cin>>urun;
    cout<<"Urunun fiyatini giriniz : ";
    cin>>fiyat;

    switch (urun){
    case 0:
        cout<<"Kitap fiyati : "<<fiyat + (fiyat*0.04)<<endl;
        break;
    case 1:
        cout<<"Gida fiyati : "<<fiyat + (fiyat*0.056)<<endl;
        break;
    case 2:
        cout<<"Luks esya fiyati : "<<fiyat + (fiyat*0.196)<<endl;
        break;
    default:
        cout<<"Hatali giris yaptiniz !";
        break;
    }

return 0;
}
