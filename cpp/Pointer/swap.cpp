#include <iostream>

using namespace std;

void swap(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void){
	int a,b;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	cout<<endl<<"A : "<<a<<endl<<"B : "<<b<<endl;
	swap(&a,&b);
	cout<<endl<<"A : "<<a<<endl<<"B : "<<b;
	
	return 0;
}
