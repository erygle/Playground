#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void createMatrix(int arr[][COL],int row);
void printMatrix(int arr[][COL],int row);
int matrixProduct(int arr1[][COL],int arr2[][COL],int row);
void printWpointer(int arr[][COL],int row);

int main(int argc, char const *argv[]){
	srand(time(NULL));
	int arr1[ROW][COL];
	int arr2[ROW][COL];
	createMatrix(arr1,ROW);
	createMatrix(arr2,ROW);
	printWpointer(arr1,ROW);
	printWpointer(arr2,ROW);
	//printMatrix(arr1,ROW);
	//printMatrix(arr2,ROW);
	//matrixProduct(arr1,arr2,ROW);
	
	return 0;
}
void createMatrix(int arr[][COL],int row){
	for(int i=0; i<ROW; i++){
		for(int j=0; j<COL; j++){
			arr[i][j] = rand()%10;
		}
	}
}
void printMatrix(int arr[][COL],int row){
	static int count = 0;
	for(int i=0; i<ROW; i++){
		for(int j=0; j<COL; j++){
			printf("%d ",arr[i][j]);
		}puts("");
	}puts("");
	printf("-----\ncount : %d\n-----\n",count);
	count++;
}
int matrixProduct(int arr1[][COL],int arr2[][COL],int row){
	int product[ROW][COL];
	for(int i=0; i<ROW; i++){
		for(int j=0; j<COL; j++){
			product[i][j] = arr1[i][j] * arr2[i][j];
		}
	}printMatrix(product,ROW);
	return product;
}
void printWpointer(int arr[][COL],int row){
	//int *ptr=arr;
	for(int i=0; i<ROW; i++){
		for(int j=0; j<COL; j++){
			printf("%d ",*(*(arr+i)+j));
		}puts("");
	}puts("");
}
