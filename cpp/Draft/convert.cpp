#include <iostream>
#define N 40

using namespace std;

void sum(int *p, int n, int d[]){
	*p = 0;
	for(int i=0 ; i < n ; i++){
		*p = *p + d[i];
	}
}


int main(void){
	int data[N];
	int accum = 0 ;
	for(int i = 0 ; i<N ; i++){
		data[i] = i*2;
	}
	sum(&accum,N,data);
	cout<<"Sum is "<<accum;
	
return 0;	
	
}
