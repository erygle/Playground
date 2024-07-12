#include<stdio.h>
void calculate_fibonacci_sequence(int n);
int main(int argc, char const *argv[]){//0 1 1 2 3 5 8 13 21
    int i,n;
    char cn;
    printf("Please enter term(s) number : ");
    scanf("%c",&cn);
    /*while(1){
        if(n>0)break;
        }else if(n>='a' && n<='z' || n<='A' && n>='Z'){
        printf("Please enter “numeric” term(s) number :");
        scanf("%d",&n);}
        else{
        printf("Please enter “positive” term(s) number :");
        scanf("%d",&n);
    }*/
    for(i=1; i<=cn-48; i++)calculate_fibonacci_sequence(i);
return 0;
}
void calculate_fibonacci_sequence(int n){
    int arr[n+1],i;
    arr[0]=0;
    arr[1]=1;
    for(i=2 ; i<=n ; i++) arr[i] = arr[i-1]+arr[i-2];
    printf("%d\n",arr[n]);
}