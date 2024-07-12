#include<stdio.h>
#include<stdlib.h>
#include<math.h>
enum day {sun,mon,tue,wed,thu,fri,sat};

void print_day(enum day d){
	switch(d){
		case sun: printf("sunday ");    break;
		case mon: printf("monday ");    break;
		case tue: printf("tuesday ");   break;
		case wed: printf("wednesday "); break;
		case thu: printf("thursday ");  break;
		case fri: printf("friday ");    break;
		case sat: printf("saturday ");  break;
		default : printf("%d is an error.",d);
	}
}

enum day next_day(enum day d){
	return (( d + 1 ) % 7 );
}
int main(void){
	enum day today = fri;
	print_day(today);
	printf("\n\n");
	print_day(7);
	printf("\n\n");
	print_day(next_day(today));
	printf("\n\n");
	print_day(next_day(10));
	printf("\n\n");
	int a = next_day(15);
	printf("%d",a);
	return 0;
}
