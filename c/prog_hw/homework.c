#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
void write_polynomial3();
void write_polynomial4();
void calculate_fibonacci_sequence(int n);
void decide_perfect_harmonic_number(int n);
void bmi_calculation ();

int main(int argc, char const *argv[]){
    int choice,poly_choice,n;

    while(1){
        printf("-------SELECT YOUR PROCESS-------\n1-Polynom Write\n2-Fibonacci Calculate\n3-Calculate Perfect and Harmonic Numbers\n4-BMI Calculate\n5-Exit\nChoice:");
        scanf("%d",&choice);

        if(choice==1){
            printf("\n~~~~~Select Process~~~~~\n1-Write Degree 3 Polynom\n2-Write Degree 4 Polynom\nChoice:");
                scanf("%d",&poly_choice);
            switch (poly_choice)
            {
            case 1:
                write_polynomial3();
                break;
            case 2:
                write_polynomial4();
                break;
            default:
                printf("\nWrong choice.\n");
                break;
            }
        }else if(choice==2){


            int i;
            char c;
            printf("Please enter term(s) number : ");
                scanf("%d",&n);
            while(n<=0){
            printf("Please enter 'positive' term(s) number : ");
                scanf("%d",&n);
                scanf("%c",&c);}
            for(i=1; i<=n; i++)calculate_fibonacci_sequence(i);
        }else if(choice==3){
            while(1){
                char c;
                printf("Enter number : ");
                    scanf("%d",&n);
                if(n==0)break;
                decide_perfect_harmonic_number(n);}
        }else if(choice==4){
            bmi_calculation();
        }else if(choice==5){
            printf("Exiting...");
            break;
        }else{
            printf("Wrong choice.\nExiting...");
            break;
        }
    }

    return 0;
}
void write_polynomial3(){
    double a0,a1,a2,a3;
    double const_list[3] = {a1,a2,a3};
    int i;
    for(i=2 ;i>=0 ;i--){
        printf("\nEnter term of x^%d :",i+1);
            scanf("%lf",&const_list[i]);    
    }printf("\nEnter constant number :");
        scanf("%lf",&a0);
    for(i=2; i>=0; i--){
        if(i==2){
            if(const_list[i]>0){
                printf("%Gx^%d",const_list[i],i+1);
            }
            else if(const_list[i]==0){
                continue;
            }
            else{
                printf("%Gx^%d",const_list[i],i+1);
                }
        }else{
            if(const_list[i]>0){
                printf("+%Gx^%d",const_list[i],i+1);
            }
            else if(const_list[i]==0){
                continue;
            }
            else{
                printf("%Gx^%d",const_list[i],i+1);
            }
        }
    }if(a0>0)printf("+%G",a0);
    else if(a0==0)printf(" ");
    else printf("%G",a0);
puts("");
}
void write_polynomial4(){
    double a0,a1,a2,a3,a4;
    double const_list2[4] = {a1,a2,a3,a4};
    int i;
    for(i=3 ;i>=0 ;i--){
        printf("\nEnter term of x^%d :",i+1);
            scanf("%lf",&const_list2[i]);    
    }printf("\nEnter constant number :");
        scanf("%lf",&a0);
    for(i=3; i>=0; i--){
        if(i==3){
            if(const_list2[i]>0){
                printf("%Gx^%d",const_list2[i],i+1);
            }
            else if(const_list2[i]==0){
                continue;
            }
            else{
                printf("%Gx^%d",const_list2[i],i+1);
                }
        }else{
            if(const_list2[i]>0){
                printf("+%Gx^%d",const_list2[i],i+1);
            }
            else if(const_list2[i]==0){
                continue;
            }
            else{
                printf("%Gx^%d",const_list2[i],i+1);
            }
        }
    }if(a0>0)printf("+%G",a0);
    else if(a0==0)printf(" ");
    else printf("%G",a0);
puts("");
}
void calculate_fibonacci_sequence(int n){
    int arr[n+1],i;
    arr[0]=0;
    arr[1]=1;
    for(i=2 ; i<=n ; i++) arr[i] = arr[i-1]+arr[i-2];
    printf("%d.Term : %d\n",n,arr[n]);
}
void decide_perfect_harmonic_number(int n){
    int i,sum=0,divCt=0;
    double sumMean=0.0,doubDivCt=0.0;
    printf("Natural Number Divisors:");
    for(i=1 ; i<=n ; i++){
        if(n%i==0){
            printf("%d ",i);
            divCt++;
            doubDivCt++;
            sum+=i;
            if(i==n)sum=sum-i;
            sumMean+=1.0/i;}
    }sumMean = doubDivCt/sumMean;
    printf("\nYour Number Is %d.\n",n);
    printf("%G\n",sumMean);
    if(sum==n)printf("Is Perfect Number ? : Yes.");
    else printf("Is Perfect Number? : No.");
    if(sumMean - (int)sumMean==0)printf("\nIs Harmonic Divisor Number? : Yes.\n");
    else printf("\nIs Harmonic Divisor Number? : No.\n");
}
void bmi_calculation (){
    double wei,hei;
    printf("Please enter weight(kg) : ");
        scanf("%lf",&wei);
    printf("Please enter height(m) : ");
        scanf("%lf",&hei);
    double bmi = wei/hei*hei;
    printf("Your category : ");
    if(bmi<16.0)printf("Severely Underweight.");
    else if(bmi>=16.0 && bmi<18.4)printf("Underweight.");
    else if(bmi>=18.4 && bmi<24.9)printf("Normal.");
    else if(bmi>=24.9 && bmi<30.0)printf("Overweight.");
    else printf("Obese.");
puts("");
}
