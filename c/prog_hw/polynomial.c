#include<stdio.h>

void write_polynomial3(double a3, double a2, double a1, double a0);
void write_polynomial4(double a4, double a3, double a2, double a1, double a0);

int main(int argc, char const *argv[]){
    write_polynomial3(5.0,2.0,3.57,-6.0);
    puts("");
    write_polynomial4(7.5,-2.0,0,3.0,8.0);


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