#include <iostream>
using namespace std;

/*FONKSIYONLAR :

// Fonksiyon tanımlama ve çağırma
void selamla() {
    cout << "Merhaba! Nasilsiniz?" << endl;
}

// Parametre iletimi
void toplama(int a, int b) {
    int sonuc = a + b;
    cout << "Toplam: " << sonuc << endl;
}

// Recursive fonksiyon
int faktoriyel(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * faktoriyel(n - 1);
    }
}

int main() {
    selamla(); // Fonksiyon cagirma

    int x = 5, y = 7;
    toplama(x, y); // Parametre iletimi

    // Recursive fonksiyon cagirma
    int sayi = 5;
    cout << sayi << " sayisinin faktoriyeli: " << faktoriyel(sayi) << endl;

    return 0;
}
*/

/*-------------------------------------------------------------------------------------------------------------------

POINTER:


int main() {
    int x = 42; // Bir tamsayı değişkeni oluştur
    int *xPointer; // Bir tamsayı pointerı oluştur
    xPointer = &x; // x değişkeninin bellek adresini pointer'a ata

    cout << "x degeri: " << x << endl;
    cout << "xPointer ile ulasilan deger: " << *xPointer << endl;

    // Pointer aracılığıyla değişkeni güncelleme
    *xPointer = 99;
    cout << "Yeni x degeri: " << x << endl;

    // Bellekte dinamik bellek tahsisi ve pointer kullanımı
    int *dinamikSayilar = new int[5]; // 5 elemanlı bir tamsayı dizisi için bellek tahsisi

    for (int i = 0; i < 5; ++i) {
        dinamikSayilar[i] = i * 10; // Dizi elemanlarını doldur
    }

    cout << "Dinamik Dizi Elemanlari:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << dinamikSayilar[i] << " ";
    }
    cout << endl;

    delete[] dinamikSayilar; // Dinamik belleği serbest bırak

    return 0;
}
*/