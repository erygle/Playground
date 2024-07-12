#include<stdio.h>
void decide_perfect_harmonic_number(int n);
int main(int argc, char const *argv[]){
    int n,i;
    printf("Enter number : ");
    scanf("%d",&n);
    decide_perfect_harmonic_number(n);
puts("");
return 0;
}
void decide_perfect_harmonic_number(int n){
    int i,sum=0,divCt=1;
    double sumMean=0.0;
    printf("Natural Number Divisors:");
    for(i=1 ; i<=n/2+1 ; i++){
        if(n%i==0){
            printf("%d ",i);
            divCt++;
            sum+=i;
            sumMean+=1/(float)i;}
    }sumMean+=1/(float)n;
    printf("%d\nYour Number Is %d.\n",n,n);
    printf("%lf\n",sumMean);
    if(sum==n)printf("Is Perfect Number ? : Yes.");
    else printf("Is Perfect Number? : No.");
    if(divCt%(int)sumMean==0)printf("\nIs Harmonic Divisor Number? : Yes.");
    else printf("\nIs Harmonic Divisor Number? : No.");
}