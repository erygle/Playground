#include<stdio.h>
void write_polynomial3(double a3, double a2, double a1, double a0);
void write_polynomial4(double a4, double a3, double a2, double a1, double a0);
void calculate_fibonacci_sequence(int n);
void decide_perfect_harmonic_number(int n);
void bmi_calculation (double wei,double hei);

int main(int argc, char const *argv[]){
    int choice,i,n,poly_choice;
    printf("-------SELECT YOUR PROCESS-------\n1-Polynom Write\n2-Fibonacci Calculate\n3-Calculate Perfect and Harmonic Numbers\n4-BMI Calculate\n5-Exit\nChoice:");
    scanf("%d",&choice);
    if(choice==1){
        double a4,a3,a2,a1,a0;
        printf("\n~~~~~Select Process~~~~~\n1-Write Degree 3 Polynom\n2-Write Degree 4 Polynom\nChoice:");
        scanf("%d",&poly_choice);
        switch(poly_choice){
        case 1:
            double poly3[3] = {a1,a2,a3};
            for(i=2 ;i>=0 ;i--){
                printf("\nEnter term of x^%d :",i+1);
                    scanf("%G",&poly3[i]);    
            }
            printf("\nEnter constant number :");
            scanf("%G",&a0);
            write_polynomial3(a3,a2,a1,a0);
            break;
        case 2:
            double poly4[4] = {a1,a2,a3,a4};
            for(i=3 ;i>=0 ;i--){
                printf("\nEnter term of x^%d :",i+1);
                    scanf("%lg",&poly4[i]);    
            }
            printf("\nEnter constant number :");
                scanf("%lg",&a0);
            write_polynomial4(a4,a3,a2,a1,a0);
            break;
        default:
            printf("Wrong Choice.Exiting...");
            break;
        }
    }else if(choice==2){
        while(1){
            printf("Please enter term(s) number : ");
                scanf("%d",&n);
            if(n<=0){
                printf("Please enter “positive” term(s) number :");
                    scanf("%d",&n);}
            for(i=1; i<=n; i++)calculate_fibonacci_sequence(i);
        }
    }else if(choice==3){
        int n,i;
        printf("Enter number : ");
            scanf("%d",&n);
        decide_perfect_harmonic_number(n);
    }else if(choice==4){
        double weight,height;
        printf("Please enter weight(kg) : ");
            scanf("%lf",&weight);
        printf("Please enter height(m) : ");
            scanf("%lf",&height);
        //bmi_calculation(weight,height);
    }else if(choice==5){
        printf("Exiting...");
    }else{
        printf("Wrong choice.Exiting...");
    }

puts("");
return 0;
}
void write_polynomial3(double a3, double a2, double a1, double a0){//   -(a0)x^3+(a1)x^2-(a2)3.2x+(a3)
    double const_list[3] = {a1,a2,a3};
    int i;
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
}
void write_polynomial4(double a4, double a3, double a2, double a1, double a0){
    double const_list[4] = {a1,a2,a3,a4};
    int i;
    for(i=3; i>=0; i--){
        if(i==3){
            if(const_list[i]>0){
                printf("%.2lfx^%d",const_list[i],i+1);
            }
            else if(const_list[i]==0){
                continue;
            }
            else{
                printf("%.2lfx^%d",const_list[i],i+1);
                }
        }else{
            if(const_list[i]>0){
                printf("+%.2lfx^%d",const_list[i],i+1);
            }
            else if(const_list[i]==0){
                continue;
            }
            else{
                printf("%.2lfx^%d",const_list[i],i+1);
            }
        }
    }if(a0>0)printf("+%.2lf",a0);
    else if(a0==0)printf(" ");
    else printf("%.2lf",a0);
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
            sumMean+=1.0/i;}
    }sumMean = doubDivCt/sumMean;
    printf("\nYour Number Is %d.\n",n);
    printf("%G\n",sumMean);
    if(sum==n)printf("Is Perfect Number ? : Yes.");
    else printf("Is Perfect Number? : No.");
    if(sumMean - (int)sumMean==0)printf("\nIs Harmonic Divisor Number? : Yes.");
    else printf("\nIs Harmonic Divisor Number? : No.");
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
}

