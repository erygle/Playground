/*Diziler ve Liste Yapıları: */



//--------------------------------------------------------------------------
/*Dizi:

#include <iostream>
using namespace std;

int main() {
    int dizi[5] = {10, 20, 30, 40, 50};

    // Dizi içeriğini ekrana yazdırma
    for (int i = 0; i < 5; ++i) {
        cout << dizi[i] << " ";
    }

    return 0;
}

-------------------------------------------------------------------------*/

/*Bağlı Liste (LinkedList):

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
int main() {
    Node* head = nullptr; // Başlangıçta boş bir baş düğüm

    // İlk düğümü oluşturma
    Node* node1 = new Node();
    node1->data = 10;
    node1->next = nullptr;
    head = node1; // Baş düğümü ayarlama

    // İkinci düğümü oluşturma ve bağlama
    Node* node2 = new Node();
    node2->data = 20;
    node2->next = nullptr;
    node1->next = node2;

    // Diğer düğümleri benzer şekilde oluşturabilirsiniz...

    return 0;
}
-----------------------------------------------------------------------------*/

/*Yığın (Stack):

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> yigin;

    yigin.push(10); // Yığına eleman ekleme
    yigin.push(20);
    yigin.push(30);

    cout << "Yiginin en ustundeki eleman: " << yigin.top() << endl; // Yığının en üstündeki elemanı okuma
    yigin.pop(); // Yığından eleman çıkarma
    cout << "Yiginin en ustundeki eleman: " << yigin.top() << endl;

    return 0;
}

-----------------------------------------------------------------------------*/

/*Kuyruk (Queue):

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> kuyruk;

    kuyruk.push(10); // Kuyruğa eleman ekleme
    kuyruk.push(20);
    kuyruk.push(30);

    cout << "Kuyrugun basindaki eleman: " << kuyruk.front() << endl; // Kuyruğun başındaki elemanı okuma
    kuyruk.pop(); // Kuyruktan eleman çıkarma
    cout << "Kuyrugun basindaki eleman: " << kuyruk.front() << endl;

    return 0;
}


-----------------------------------------------------------------------------*/

/*Map (Harita):

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> harita;

    harita["elma"] = 5; // Haritaya eleman ekleme
    harita["armut"] = 3;
    harita["muz"] = 8;

    cout << "Elma: " << harita["elma"] << endl; // Haritadan eleman okuma
    cout << "Armuts: " << harita["armut"] << endl;

    return 0;
}


-----------------------------------------------------------------------------*/

/*Vector:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10); // Vektöre eleman ekleme
    v.push_back(20);
    v.push_back(30);

    cout << "Vector'un 2. elemani: " << v[1] << endl; // Vektörden eleman okuma

    return 0;
}


-----------------------------------------------------------------------------*/

/*Sets(Küme):

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> kume;

    kume.insert(10); // Kümeye eleman ekleme
    kume.insert(20);
    kume.insert(10); // Tekrarlı eleman eklenmez

    cout << "Kumenin boyutu: " << kume.size() << endl; // Kümenin boyutunu okuma

    return 0;
}

-----------------------------------------------------------------------------*/

/*Array:

#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> dizi = {10, 20, 30, 40, 50};

    // Dizi içeriğini ekrana yazdırma
    for (int i = 0; i < 5; ++i) {
        cout << dizi[i] << " ";
    }

    return 0;
}
*/
