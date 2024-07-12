#include<iostream>
#include<cstdlib>
#include<ios>
#include<limits>
#include<string>
#include<cmath>

using namespace std;
int roundFunc(double);

int main(int argc, char* argv[]){
    /*int n(2);
    double m(9);
    double ans = m/static_cast<double>(n); //statict_cast, const_cast, dynamic_cast, reinterpret_cast
    cout<<ans<<"\t\t"<<n;*/

    /*int n = 2;
    int valueProduced = 2*(n++);//if there is ++n then valueProduced is 6.
    int valueProduced2 = 2*n;
    cout << valueProduced << "\n";//prints 4
    cout << valueProduced2 << "\n";//prints 6
    cout << n << "\n";//prints 2*/
    //rastgele kod
    /*double price(62.50);
    cerr<<"Price is "<<price;*/
    double number;
    char choice;
    do{
        cout<<"Enter a value : ";
        cin>>number;
        cout<<endl<<"Closest number to your number is "<<roundFunc(number)<<endl;
        cout<<"Do you want to continue (y/n) :";
        cin>>choice;
    } while(choice == 'y' || choice == 'Y');
    
return 0;    
}
int roundFunc(double num){
    return static_cast<int>(ceil(num-0.5));
}